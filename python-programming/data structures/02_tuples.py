# Creating a tuple
coordinates = (10, 20)

# Accessing elements
print("X:", coordinates[0])
print("Y:", coordinates[1])

# Tuples are immutable → this will cause an error if uncommented
# coordinates[0] = 50

# Tuple unpacking
x, y = coordinates
print("Unpacked:", x, y)

