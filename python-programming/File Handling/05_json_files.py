
import json
data = {"name":"Atreyi","skills":["python","c"]}
with open("data.json","w") as f:
    json.dump(data, f, indent=2)

with open("data.json") as f:
    loaded = json.load(f)
print(loaded)

