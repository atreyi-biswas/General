import random

num = random.randint(1, 20)
guess = 0

while guess != num:
    guess = int(input("Guess number 1–20: "))
    if guess < num: print("Too low!")
    elif guess > num: print("Too high!")
    else: print("Correct!")
