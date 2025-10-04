import keyboard
import pyautogui
import time

message = "Hmn"
delay_Message = 0.5
repeat_count = 1000000


print("Press 'm' to start auto typing")
keyboard.wait('m')

time.sleep(2)

for i in range (repeat_count):
    pyautogui.typewrite(message)
    pyautogui.press('enter')
    time.sleep(delay_Message)

print("Exit auto typing.")
