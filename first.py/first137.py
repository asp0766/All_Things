#  Exercise  - Drink Water Reminder Solution : -


import os
import time
import ctypes
import winsound

REPEAT_INTERVAL = 3600  # Repeat frequency in seconds

def show_message():
    # Display a message box
    ctypes.windll.user32.MessageBoxW(0, "Hey Anurag, Drink water", "Reminder", 1)

def play_sound():
    # Play a sound (you can replace 'SystemHand' with any other sound)
    winsound.MessageBeep(winsound.MB_ICONEXCLAMATION)

while True:
    show_message()  # Show the message box
    play_sound()    # Play a sound
    time.sleep(REPEAT_INTERVAL)  # Wait for the specified interval