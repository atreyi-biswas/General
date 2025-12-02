lst = [1, 2, 3, 2, 4, 1, 5]

dup = []
for x in lst:
    if lst.count(x) > 1 and x not in dup:
        dup.append(x)

print("Duplicates:", dup)

