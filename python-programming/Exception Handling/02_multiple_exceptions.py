try:
    a = [1,2]
    print(a[5])
    x = 1/0
except IndexError:
    print("Index error")
except ZeroDivisionError:
    print("Divide by zero")
