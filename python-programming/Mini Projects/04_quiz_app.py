questions = {
    "Capital of India? ": "Delhi",
    "5 + 7 = ? ": "12",
    "My name? ": "Atreyi"
}

score = 0

for q, a in questions.items():
    ans = input(q)
    if ans.lower() == a.lower():
        score += 1

print("Score:", score, "/", len(questions))

