import pyautogui
import time

comments = ["Sakib","You Are A","Bitch"]

time.sleep(5)

for i in range(90):
    pyautogui.typewrite(comments[i%3])
    pyautogui.typewrite("\n")
    time.sleep(2)
    