todos = []

while True:
    print("\n1.Add  2.View  3.Remove  4.Exit")
    choice = input("Choose: ")

    if choice == '1':
        todos.append(input("Enter task: "))

    elif choice == '2':
        for i, t in enumerate(todos):
            print(i, t)

    elif choice == '3':
        idx = int(input("Index to remove: "))
        todos.pop(idx)

    elif choice == '4':
        break
