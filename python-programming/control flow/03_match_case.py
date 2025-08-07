day = input("Enter day: ").lower()

match day:
    case "monday":
        print("It's the Start of the week!")
    case "friday":
        print("It's the Last working day!")
    case "saturday" | "sunday":
        print("It's the Weekend!")
    case _:
        print("It's the Mid-week day!")

