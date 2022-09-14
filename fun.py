import pyautogui
import time

comments = ["Hi","I am Moozahed","Just for fun","I am just checking ","Awesome"]
x=10

time.sleep(5)

for i in range(x):
    pyautogui.write(comments[i%x])
    pyautogui.write("\n")
    time.sleep(2)
    


   historyi AM mOOZAHED
   jUST FOR FUN
   i AM JUST CHECKING 
   aWESOME
   