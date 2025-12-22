import matplotlib.pyplot as plt
import numpy as np

x = np.array([2023, 2024, 2025, 2026])
y1 = np.array([15, 30, 40, 20])
y2 = np.array([10, 20, 50, 5])
y3 = np.array([5, 25, 10, 40])

plt.title("Class Size", fontsize=25,
                        family="Arial",
                        fontweight="bold" ,
                        color="blue" )

plt.xlabel("Year",      fontsize=15,
                        family="Arial",
                        fontweight="bold" ,
                        color="orange" )

plt.ylabel("Students",  fontsize=15,
                        family="Arial",
                        fontweight="bold" ,
                        color="orange" )

plt.tick_params(
    axis="both",
    colors="red")

plt.plot(x, y1)
plt.plot(x, y2)
plt.plot(x, y3)

plt.show()
