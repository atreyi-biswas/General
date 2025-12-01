students = []

while True:
    print("\n1.Add 2.View 3.Search 4.Exit")
    c = input("Choose: ")

    if c == '1':
        name = input("Name: ")
        roll = input("Roll: ")
        students.append({"name": name, "roll": roll})

    elif c == '2':
        for s in students:
            print(s)

    elif c == '3':
        r = input("Enter roll: ")
        for s in students:
            if s["roll"] == r:
                print("Found:", s)
                break
        else:
            print("Not found")

    else:
        break

