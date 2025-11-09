from collections import Counter
def is_anagram(a,b):
    return Counter(a.replace(" ","").lower()) == Counter(b.replace(" ","").lower())

print(is_anagram("listen", "silent"))
