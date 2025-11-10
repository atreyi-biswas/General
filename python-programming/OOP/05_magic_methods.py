class Word:
    def __init__(self, text): self.text = text
    def __str__(self): return self.text
    def __len__(self): return len(self.text)

w = Word("python")
print(str(w), len(w))
