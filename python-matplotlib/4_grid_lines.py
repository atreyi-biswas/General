import matplotlib.pyplot as plt
import numpy as np

plt.grid( axis = 'y',   
        color = 'black', 
        linewidth = "1", 
        linestyle='dashed') # dotted, dot-dashed, solid

x = [2, 4, 6, 8, 10]
y = [5, 10, 15, 20, 25]

plt.plot(x,y)
plt.show()

