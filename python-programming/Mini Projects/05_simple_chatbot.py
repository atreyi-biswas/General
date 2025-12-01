while True:
    msg = input("You: ")

    if "hi" in msg.lower():
        print("Bot: Hello!")
    elif "bye" in msg.lower():
        print("Bot: Bye!")
        break
    else:
        print("Bot: I don’t understand.")
