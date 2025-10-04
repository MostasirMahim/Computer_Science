import pyautogui
import keyboard
import time

message = "sonamoni"  
delay_between_messages = 0.5 
repeat_count = 100000  


print("Move to the text field where you want to type.")
print("Press 's' key to start auto-typing...")
keyboard.wait('s')

time.sleep(2)


for i in range(repeat_count):
    pyautogui.typewrite(message)
    pyautogui.press('enter')
    time.sleep(delay_between_messages)

print("Done ✅")
