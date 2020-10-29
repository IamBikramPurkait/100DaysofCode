''' Day 4 : 29 October 2020
Author : Bikram Purkait 

Create a simple Digital Cloak using tkinter and time module  '''

# import neccesary module
from tkinter import *
import time

# creating window using tkinter module
root = Tk()
# changed the title name as Digital Clock
root.title("Digital Clock")
# changed the geometry of a clock to width 370 and height 134
root.geometry('370x134')
# changed the geometry of a clock non resizable
root.resizable(False, False)
# create a label and its geometry managed with grid
label = Label(root, bg="#17A589", fg='yellow',
              font=("comicsense", 30, 'bold'), bd=43, width=12)
label.grid()
# create function name clock for showing the time in Label
def clock():
    text_input = time.strftime("%r")
    label.config(text=text_input)
    label.after(200, clock)
# clock function calling
clock()
# run infinite loop for run the application window
root.mainloop()
