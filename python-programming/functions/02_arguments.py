# Default argument
def greet_user(name="Guest"):
    print("Hello,", name)

# Keyword arguments
def introduce(name, age):
    print(f"My name is {name} and I am {age} years old.")

# Variable-length arguments (*args)
def add_numbers(*args):
    return sum(args)

# Variable-length keyword arguments (**kwargs)
def print_details(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")


# Testing
greet_user()  #prints: Hello, Guest
greet_user("Atreyi")  #prints: Hello, Atreyi

introduce(age=20, name="Atreyi")  #prints: My name is Atreyi and I am 20 years old.

print("Sum:", add_numbers(1, 2, 3, 4, 5))  #prints: 15

print_details(name="Atreyi", course="CSE", year=2)  #prints: 
                                                    #name: Atreyi
                                                    #course:CSE
                                                    #year:2

