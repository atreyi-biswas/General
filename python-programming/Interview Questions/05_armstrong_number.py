n = input("Enter number: ")
digits = list(map(int, n))
power = len(digits)

total = sum(d ** power for d in digits)

print("Armstrong" if total == int(n) else "Not Armstrong")

