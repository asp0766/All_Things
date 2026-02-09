# Categorical Data Visualization (Boxplot)  : -


import seaborn as sns
import matplotlib.pyplot as plt

# Load a sample dataset
tips = sns.load_dataset("tips")

# Create a boxplot with operations
sns.boxplot(x="day", y="total_bill", data=tips, palette="Set2", width=0.5)

# Adding jitter (using swarmplot)
sns.swarmplot(x="day", y="total_bill", data=tips, color='black', alpha=0.5)

# Customizing the plot
plt.title("Boxplot and Jitter of Total Bill by Day", fontsize=16)
plt.xlabel("Day of the Week", fontsize=12)
plt.ylabel("Total Bill ($)", fontsize=12)

# Show the plot
plt.show()
