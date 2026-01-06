import matplotlib.pyplot as plt
import numpy as np

# Generate random data
data = np.random.randn(1000)

# Create the histogram in one layer with all operations applied
plt.hist(data, bins=30, color='skyblue', edgecolor='black', alpha=0.7, density=True)

# Adding labels and title
plt.xlabel('Values')
plt.ylabel('Density')
plt.title('Customized Histogram')

# Cumulative histogram
plt.hist(data, bins=30, color='lightgreen', edgecolor='black', alpha=0.5, cumulative=True, density=True)

# Change the y-axis scale to logarithmic
plt.yscale('log')

# Adding a vertical line at the mean of the data
mean = np.mean(data)
plt.axvline(mean, color='red', linestyle='dashed', linewidth=2)

# Add annotation for the mean line
plt.annotate(f'Mean: {mean:.2f}', xy=(mean, 0.03), xytext=(mean+0.5, 0.05),
             arrowprops=dict(facecolor='red', arrowstyle='->'),
             horizontalalignment='center')

# Adding gridlines
plt.grid(True)

# Display the plot
plt.show()
