import matplotlib.pyplot as plt
import numpy as np

x = np.array(['First Year', 'Second Year', 'Third Year', 'Fourth Year'])
y = np.array([100,200,300,150])

plt.title("Pie Chart", color='black', fontsize=20, fontweight='bold')

colors=["red", "green", "pink", "yellow"]

plt.pie(y, labels=x,
        autopct="%1.2f%%",
        colors=colors,
        explode=[0, 0, 0, 0.1],
        shadow=True,
        startangle=90)
plt.show()
