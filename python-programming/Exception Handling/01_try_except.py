try:
    x = int(input("Enter int: "))
except ValueError:
    print("Not an integer.")
else:
    print("You entered", x)
finally:
    print("Done.")
