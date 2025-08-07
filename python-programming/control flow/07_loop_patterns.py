rows = int(input("Enter number of rows: "))

# Right-angled triangle
print("Right-angled triangle:")
for i in range(1, rows + 1):
    print("*" * i)

# Pyramid
print("\nPyramid pattern:")
for i in range(1, rows + 1):
    print(" " * (rows - i) + "*" * (2 * i - 1))

