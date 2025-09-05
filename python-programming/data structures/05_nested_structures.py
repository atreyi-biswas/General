# List of dictionaries
students = [
    {"name": "Atreyi", "age": 18},
    {"name": "Sriti", "age": 20}
]

print("Students list:", students)

# Dictionary with list values
courses = {
    "CST": ["Python", "C", "DSA"],
    "ECE": ["Circuits", "Signals"]
}

print("CST courses:", courses["CST"])

# Nested access
print("First CST course:", courses["CST"][0])

