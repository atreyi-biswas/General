s1 = input("Enter string 1: ")
s2 = input("Enter string 2: ")

print("Anagram" if sorted(s1) == sorted(s2) else "Not Anagram")

