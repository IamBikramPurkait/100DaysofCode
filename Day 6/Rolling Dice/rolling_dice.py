from tkinter import *
import random

root=Tk()
root.title("Rolling Dice")
root.resizable(False,False)
icon=PhotoImage(file="dice.png")
root.iconphoto(False,icon)
root.configure(bg="turquoise1")

def roll():
    lbl["text"] = random.randint(1, 6)


btn=Button(root,text="Roll",width=20,height=5,
font="arial 15 bold",relief=RAISED,command=roll,bg="gold",fg="orangered")
btn.pack(padx=5,pady=5,ipadx=5,ipady=5)

lbl=Label(root,text="",width=20,height=5,
font="arial 15 bold",relief=RAISED,bg="salmon",fg="purple4")
lbl.pack(padx=5,pady=5,ipadx=5,ipady=5)

root.mainloop()