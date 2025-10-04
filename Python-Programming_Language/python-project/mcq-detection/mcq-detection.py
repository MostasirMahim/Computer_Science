import cv2
import pytesseract
import numpy as np
from PIL import Image
import json

# Optional: Set Tesseract path on Windows
pytesseract.pytesseract.tesseract_cmd = r'C:\\Program Files\\Tesseract-OCR\\tesseract.exe'

def preprocess_image(image_path):
    image = cv2.imread(image_path)
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    _, binary = cv2.threshold(gray, 150, 255, cv2.THRESH_BINARY)
    return image, binary

def extract_text(binary_image):
    pil_img = Image.fromarray(binary_image)
    text = pytesseract.image_to_string(pil_img, lang='ben+eng')
    return text

def detect_red_circles(image):
    hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
    lower_red1 = np.array([0, 70, 50])
    upper_red1 = np.array([10, 255, 255])
    lower_red2 = np.array([160, 70, 50])
    upper_red2 = np.array([180, 255, 255])
    mask = cv2.inRange(hsv, lower_red1, upper_red1) | cv2.inRange(hsv, lower_red2, upper_red2)

    contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    red_centers = []
    for cnt in contours:
        x, y, w, h = cv2.boundingRect(cnt)
        if 10 < w < 60 and 10 < h < 60:
            red_centers.append((x + w // 2, y + h // 2))
    return red_centers

def structure_mcqs(raw_text):
    lines = [line.strip() for line in raw_text.split('\n') if line.strip()]
    mcqs = []
    q_buffer = {}
    for line in lines:
        if any(opt in line for opt in ['(ক)', '(খ)', '(গ)', '(ঘ)']):
            # This regex is a bit complex due to potential varying spaces and structure
            # Let's try splitting by known option prefixes and then clean up
            options_raw = line.split('(ক)')
            question_part = options_raw[0].strip()
            if question_part and not q_buffer: # If there's a question part before (ক) and no current question
                q_buffer = {"question": question_part}

            options_dict = {}
            # Reconstruct the line starting from (ক) to process options
            options_line_reconstructed = '(ক)' + '(ক)'.join(options_raw[1:])
            
            # Use a more robust split for options
            option_parts = []
            current_part = []
            for char in options_line_reconstructed:
                current_part.append(char)
                if len(current_part) >= 3 and ''.join(current_part[-3:]) in ['(ক)', '(খ)', '(গ)', '(ঘ)']:
                    if len(current_part) > 3: # If there's content before the next option
                        option_parts.append(''.join(current_part[:-3]))
                    current_part = list(''.join(current_part[-3:])) # Start new part with the option
            if current_part: # Add the last part
                option_parts.append(''.join(current_part))

            temp_options = {}
            for part in option_parts:
                part = part.strip()
                if part.startswith('(ক)'):
                    temp_options['ক'] = part[3:].strip()
                elif part.startswith('(খ)'):
                    temp_options['খ'] = part[3:].strip()
                elif part.startswith('(গ)'):
                    temp_options['গ'] = part[3:].strip()
                elif part.startswith('(ঘ)'):
                    temp_options['ঘ'] = part[3:].strip()

            if q_buffer:
                q_buffer["options"] = temp_options
                mcqs.append(q_buffer)
                q_buffer = {}
            else: # Handle cases where options appear on a new line right after the question
                # This might happen if the question itself is on a separate line
                if mcqs and not mcqs[-1].get("options"):
                    mcqs[-1]["options"] = temp_options
                else: # This handles cases where the question is implicit or not extracted properly
                    # For this specific image, it seems options always follow the question line.
                    pass # We'll rely on the earlier `q_buffer` logic.
        else:
            # Check if the line is a question identifier like "১০।" or "১১।"
            if line.startswith(('১।', '১০।', '১১।')):
                # If there's a pending question, save it before starting a new one.
                if q_buffer:
                    mcqs.append(q_buffer)
                q_buffer = {"question": line}
            else:
                # If there's an existing question, append the current line to it
                if q_buffer and "question" in q_buffer:
                    q_buffer["question"] += " " + line
                else:
                    q_buffer = {"question": line}

    # Add any remaining question in the buffer
    if q_buffer and q_buffer.get("question") and q_buffer.get("options"):
        mcqs.append(q_buffer)
    return mcqs

def main():
    image_path = "s1.png"  # Using the provided image filename
    image, binary = preprocess_image(image_path)
    raw_text = extract_text(binary)
    red_circles = detect_red_circles(image)
    mcqs = structure_mcqs(raw_text)

    # Associate red circles with MCQs
    # This part requires more sophisticated logic, potentially mapping circle coordinates
    # to the bounding boxes of the options. For now, we'll just report them.
    # A simple approach for this problem is to assume the top-most red circle corresponds
    # to the first MCQ, and so on. This is a heuristic and might not be robust.
    
    # Sort red circles by their y-coordinate to match them with questions top-down
    red_circles.sort(key=lambda coord: coord[1])

    # For demonstration, let's just indicate a red circle was detected for each.
    # In a real system, you'd need to associate them with the correct option.
    for i, mcq in enumerate(mcqs):
        if i < len(red_circles):
            # A more accurate way would be to check if the circle's bounding box
            # overlaps with an option's bounding box.
            # For simplicity, let's assume the first circle marks the first question's answer, etc.
            mcq["marked_answer_detected"] = True
        else:
            mcq["marked_answer_detected"] = False


    print("\nExtracted MCQs:")
    for mcq in mcqs:
        print(json.dumps(mcq, ensure_ascii=False, indent=2))

    with open("mcqs_output.json", "w", encoding="utf-8") as f:
        json.dump(mcqs, f, ensure_ascii=False, indent=2)

if __name__ == "__main__":
    main()