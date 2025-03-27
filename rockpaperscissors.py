import tkinter as tk
import random

root = tk.Tk()
root.title("Rock Paper Scissors")
label = tk.Label(root, text="Rock Paper Scissors", font=('Arial', 18))
label.pack(padx=20, pady=20)

label = tk.Label(root, text="Player      vs       Computer", font=('Arial', 14))
label.pack(padx=20, pady=20)
textbox = tk.Text(root, height=1, width = 20, font =("Arial", 16))
textbox.pack()
    
buttonframe = tk.Frame(root)
buttonframe.columnconfigure(0, weight=1)
buttonframe.columnconfigure(1, weight=1)
buttonframe.columnconfigure(2, weight=1)
R=tk.Button(buttonframe, text= "Rock", font =('Arial', 14))
R.grid(row=0, column=0)
P=tk.Button(buttonframe, text= "Paper", font =('Arial', 14))
P.grid(row=0, column=1)
S=tk.Button(buttonframe, text= "Scissors", font =('Arial', 14))
S.grid(row=0, column=2)
buttonframe.pack(fill="x")

root.mainloop()