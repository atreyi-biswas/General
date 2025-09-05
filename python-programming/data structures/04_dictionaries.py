# Creating a dictionary
student = {
    "name": "Atreyi",
    "age": 20,
    "course": "CST"
}

# Accessing values
print("Name:", student["name"])

# Adding a new key
student["year"] = 2
print("After adding year:", student)

# Modifying a value
student["age"] = 21
print("After modifying age:", student)

# Iterating
for key, value in student.items():
    print(key, ":", value)

