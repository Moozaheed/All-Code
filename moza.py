import pyautogui
import time

comments = ["Hi","I am Mozahed","Just for fun","I am just checking my Python skill","Python is awesome"]

time.sleep(5)

for i in range(500):
    pyautogui.typewrite(comments[i%5])
    pyautogui.typewrite("\n")
    time.sleep()