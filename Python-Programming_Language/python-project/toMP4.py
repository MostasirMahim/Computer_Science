import ffmpeg

input_file = 'C:\Users\GLOBAL TECHNOLOGY\Python Full Course for free 🐍 (2024) [ix9cRaBkVe0].webm'   # Path to the input .webm file
output_file = 'C:\Users\GLOBAL TECHNOLOGY\Python Full Course.mp4'  # Path to save the converted .mp4 file

ffmpeg.input(input_file).output(output_file).run()