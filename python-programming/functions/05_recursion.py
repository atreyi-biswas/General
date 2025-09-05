# Factorial using recursion
def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n-1)

# Fibonacci using recursion
def fibonacci(n):
    if n <= 0:
        return "Invalid input"
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

# Testing
print("Factorial of 5:", factorial(5))

print("First 6 Fibonacci numbers:")
for i in range(1, 7):
    print(fibonacci(i), end=" ")

