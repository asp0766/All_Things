#  Plot Bar ( Vertical ) : -


import matplotlib.pyplot as plt
import numpy as np

# Define the categories (programming languages)
x = ["Python", "C", "C++", "Java"]

# Define data for the first bar (e.g., popularity scores)
y = [85, 70, 60, 82]

# Define data for the second bar (e.g., another metric)
z = [20, 30, 40, 50]

# Set the width of the bars
width = 0.2

# Create positions for the bars on the x-axis
p = np.arange(len(x))

# Shift the second set of bars to avoid overlap
p1 = [j + width for j in p]

# Set labels for the axes
plt.xlabel("Language", fontsize=15)
plt.ylabel("NO.", fontsize=15)

# Set title of the chart
plt.title("WsTech CUBE", fontsize=15)

# Create bar plots
plt.bar(p, y, width, color="r", edgecolor="y", label="Popularity")  # First bar (red)
plt.bar(p1, z, width, color="y", label="Popularity1")  # Second bar (yellow)

# Set x-axis tick labels with rotation for better visibility
plt.xticks(p + width / 2, x, rotation=20)

# Add legend to distinguish bars
plt.legend()

# Display the bar chart
plt.show()
