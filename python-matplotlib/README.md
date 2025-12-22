# 📊 Matplotlib (pyplot) Functions Cheat Sheet

A concise reference of commonly used Matplotlib functions with explanations.

---

## Import

import matplotlib.pyplot as plt

---

## Figure & Layout

| Function | Description |
|---------|-------------|
| plt.figure() | Creates a new figure window |
| plt.subplots() | Creates figure and axes together |
| plt.subplot() | Adds a subplot to the current figure |
| plt.gcf() | Gets current figure |
| plt.gca() | Gets current axes |
| plt.tight_layout() | Automatically adjusts spacing |
| plt.subplots_adjust() | Manually adjusts spacing |
| plt.clf() | Clears current figure |
| plt.close() | Closes figure window |

---

## Basic Plotting

| Function | Description |
|---------|-------------|
| plt.plot() | Line plot |
| plt.scatter() | Scatter plot |
| plt.bar() | Vertical bar chart |
| plt.barh() | Horizontal bar chart |
| plt.hist() | Histogram |
| plt.pie() | Pie chart |
| plt.stem() | Stem (lollipop) plot |
| plt.step() | Step plot |
| plt.fill() | Fill enclosed area |
| plt.fill_between() | Fill area between curves |

---

## Statistical Plots

| Function | Description |
|---------|-------------|
| plt.boxplot() | Box-and-whisker plot |
| plt.violinplot() | Distribution visualization |
| plt.errorbar() | Plot with error bars |
| plt.stackplot() | Stacked area plot |

---

## Styling & Markers

| Parameter | Description |
|----------|-------------|
| color | Line or marker color |
| linestyle | Line style |
| linewidth | Line thickness |
| marker | Marker shape |
| markersize | Marker size |
| alpha | Transparency |

---

## Titles, Labels & Text

| Function | Description |
|---------|-------------|
| plt.title() | Plot title |
| plt.xlabel() | X-axis label |
| plt.ylabel() | Y-axis label |
| plt.suptitle() | Overall figure title |
| plt.text() | Text at coordinates |
| plt.annotate() | Annotated text with arrow |

---

## Axis Control

| Function | Description |
|---------|-------------|
| plt.xlim() | Set x-axis limits |
| plt.ylim() | Set y-axis limits |
| plt.axis() | Axis visibility/control |
| plt.xticks() | X-axis ticks |
| plt.yticks() | Y-axis ticks |
| plt.grid() | Show grid |
| plt.minorticks_on() | Enable minor ticks |

---

## Legend

| Function | Description |
|---------|-------------|
| plt.legend() | Show legend |
| plt.legend(loc='best') | Auto legend placement |

---

## Colors & Images

| Function | Description |
|---------|-------------|
| plt.imshow() | Display image / 2D array |
| plt.matshow() | Matrix visualization |
| plt.colorbar() | Color scale |
| plt.set_cmap() | Set colormap |
| plt.get_cmap() | Get colormap |

---

## Image I/O

| Function | Description |
|---------|-------------|
| plt.imread() | Read image |
| plt.imsave() | Save image |
| plt.savefig() | Save figure |

---

## Scaling & Log Plots

| Function | Description |
|---------|-------------|
| plt.xscale('log') | Log x-axis |
| plt.yscale('log') | Log y-axis |
| plt.loglog() | Log-log plot |
| plt.semilogx() | Log x-axis |
| plt.semilogy() | Log y-axis |

---

## 3D Plotting

| Function | Description |
|---------|-------------|
| ax.plot3D() | 3D line plot |
| ax.scatter3D() | 3D scatter |
| ax.bar3D() | 3D bar chart |
| ax.plot_surface() | 3D surface |
| ax.plot_wireframe() | 3D wireframe |

---

## Display & Interaction

| Function | Description |
|---------|-------------|
| plt.show() | Display plot |
| plt.pause() | Pause execution |
| plt.show(block=True) | Blocking display |
| plt.show(block=False) | Non-blocking display |

---

## Note

This cheat sheet covers most real-world Matplotlib usage, which are coded induvidually for refernce in this folder.

