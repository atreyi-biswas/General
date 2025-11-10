class MyError(Exception):
    pass

def f(x):
    if x<0: raise MyError("Negative!")
try:
    f(-1)
except MyError as e:
    print("Caught:", e)
