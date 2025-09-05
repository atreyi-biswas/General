# List comprehension
squares = [x*x for x in range(6)]
print("Squares:", squares)

# Set comprehension
evens = {x for x in range(10) if x % 2 == 0}
print("Evens:", evens)

# Dict comprehension
square_dict = {x: x*x for x in range(5)}
print("Square dictionary:", square_dict)

