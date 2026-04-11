import matplotlib.pyplot as plt
import numpy as np

x1 = np.array([0, 1, 2, 1 ,3, 4, 6, 4,8, 6, 4, 7, 9, 10])
y1 = np.array([90, 30, 28, 13, 27, 39, 50, 80, 100, 30, 28, 40, 50, 60])

x2 = np.array([10, 4, 5, 2, 3, 8, 1, 0, 3, 5, 2, 7, 6, 8])
y2 = np.array([90, 30, 28, 13, 27, 39, 50, 80, 100, 30, 28, 40, 50, 60])

plt.title("Test Scores")
plt.xlabel("Hours Studied")
plt.ylabel("Grade")

plt.scatter(x1, y1,
            color="pink",
            alpha=0.5,
            s=100,
            label="Class 1")
plt.scatter(x2, y2,
            color="blue",
            alpha=0.3,
            s=100,
            label="Class 2")

plt.legend()
plt.show()
