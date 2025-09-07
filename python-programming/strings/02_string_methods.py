text = "  Hello, Python World!  "

# strip() – removes leading/trailing spaces
cleaned = text.strip()
print("After strip():", cleaned)

# split() – breaks into list
words = cleaned.split(" ")
print("After split():", words)

# find() – finds substring index (-1 if not found)
index = cleaned.find("Python")
print("Index of 'Python':", index)

# Additional demonstration
print("Does text start with 'Hello'?", cleaned.startswith("Hello"))
print("Does text end with 'World!'?", cleaned.endswith("World!"))

