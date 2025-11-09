def is_pal(s):
    s2 = ''.join(c.lower() for c in s if c.isalnum())
    return s2 == s2[::-1]

print(is_pal("A man, a plan, a canal: Panama"))
