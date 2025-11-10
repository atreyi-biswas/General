def check_age(a):
    if a < 0:
        raise ValueError("Age cannot be negative")
    return True

print(check_age(20))
