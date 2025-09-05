# Creating a set
numbers = {1, 2, 3, 2, 1}
print("Unique set:", numbers)  # duplicates removed

# Adding element
numbers.add(4)
print("After add:", numbers)

# Set operations
a = {1, 2, 3}
b = {3, 4, 5}

print("Union:", a | b)
print("Intersection:", a & b)
print("Difference (a - b):", a - b)
print("Symmetric difference:", a ^ b)

