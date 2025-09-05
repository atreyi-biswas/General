# Function returning a single value
def square(x):
    return x * x

# Function returning multiple values
def calculate(a, b):
    return a+b, a-b, a*b, a/b

# Testing
print("Square of 5:", square(5))

sum, diff, prod, div = calculate(10, 2)
print("Results:", sum, diff, prod, div)

