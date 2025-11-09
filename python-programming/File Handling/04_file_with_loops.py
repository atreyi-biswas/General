
with open("numbers.txt", "w") as f:
    for i in range(5):
        f.write(f"{i}\n")
with open("numbers.txt") as f:
    print(sum(int(line) for line in f))

