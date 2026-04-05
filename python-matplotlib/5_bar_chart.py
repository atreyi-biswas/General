import matplotlib.pyplot as plt
import numpy as np

x = np.array(['Fruits', 'Vegetables', 'Chicken'])
y = np.array([5, 10, 15])

plt.title("Bar Graph")
plt.xlabel("Food")
plt.ylabel("Quantity")

plt.bar(x,y, color=['red', 'green', 'blue']) #plt.barh(x,y) for horizontal bar graph
plt.show()
