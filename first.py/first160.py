# Combining Plots with Seaborn (FacetGrid) : -


import seaborn as sns
import matplotlib.pyplot as plt

# Load a sample dataset
tips = sns.load_dataset("tips")

# Create a FacetGrid with operations
g = sns.FacetGrid(tips, col="sex", row="time", margin_titles=True)
g.map(sns.scatterplot, "total_bill", "tip", color="blue")

# Customizing the plot
g.set_axis_labels("Total Bill ($)", "Tip ($)")
g.set_titles("{col_name} | {row_name}")

# Adding overall title
g.fig.suptitle("Scatterplot of Total Bill and Tip by Day and Sex", fontsize=18, y=1.02)

# Show the plot
plt.show()
