# Plot Bar ( Horizontal ) : -


import matplotlib.pyplot as plt
import numpy as np


y = ["Python", "C", "C++", "Java"]


x = [85, 70, 60, 82]


z = [20, 30, 40, 50]

height = 0.2

# Create positions for the bars on the y-axis
p = np.arange(len(y))

# Shift the second set of bars to avoid overlap
p1 = [j + height for j in p]

# Set labels for the axes
plt.ylabel("Language", fontsize=15)
plt.xlabel("NO.", fontsize=15)

# Set title of the chart
plt.title("WsTech CUBE", fontsize=15)

# Create horizontal bar plots
plt.barh(p, x, height, color="r", edgecolor="y", label="Popularity")  # First bar (red)
plt.barh(p1, z, height, color="y", label="Popularity1")  # Second bar (yellow)

# Set y-axis tick labels
plt.yticks(p + height / 2, y, rotation=0)

# Add legend to distinguish bars
plt.legend()

# Display the horizontal bar chart
plt.show()
