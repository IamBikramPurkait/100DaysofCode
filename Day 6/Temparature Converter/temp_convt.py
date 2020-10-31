from tkinter import *
import random

root=Tk()
root.title("Temprature Converter")
root.resizable(False,False)
icon=PhotoImage(file="thermometer.png")
root.iconphoto(False,icon)

def temp_convt():
    f=int(ent.get())
    ans=(5/9)*(f-32)
    ent.delete(0,END)
    lbl2["text"]=ans


frame=Frame(root,bg="thistle1")
frame.pack()

ent=Entry(frame,width=10,font="arial 15 bold",relief=RAISED,bg="yellowgreen")
ent.grid(row=0,column=0,padx=5,pady=5,ipadx=5,ipady=5)

lbl1=Label(frame,text="\N{DEGREE FAHRENHEIT}",width=2,relief=RAISED,bg="lightgoldenrod")
lbl1.grid(row=0,column=1,padx=5,pady=5,ipadx=5,ipady=5)

btn=Button(frame,text="\N{RIGHTWARDS BLACK ARROW}",width=2,
font="arial 15 bold",relief=RAISED,command=temp_convt,bg="seashell3")
btn.grid(row=0,column=2,padx=5,pady=5,ipadx=5,ipady=5)

lbl2=Label(frame,text="",width=10,relief=RAISED,font="arial 15 bold",bg="palevioletred")
lbl2.grid(row=0,column=3,padx=5,pady=5,ipadx=5,ipady=5)

lbl3=Label(frame,text="\N{DEGREE CELSIUS}",width=2,relief=RAISED,bg="cyan3")
lbl3.grid(row=0,column=4,padx=5,pady=5,ipadx=5,ipady=5)

root.mainloop()