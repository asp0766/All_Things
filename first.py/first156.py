# Class Chapter 4 : -  Introduction To Seaborn ( PART 2 ) : - 

# Displot : -
import seaborn as sns
import matplotlib.pyplot as plt

# Load a sample dataset
tips = sns.load_dataset("tips")

# Create a displot with operations
sns.displot(tips['total_bill'], kde=True, bins=30, color='skyblue', aspect=1.5)

# Customizing the plot
plt.title("Distribution of Total Bill with KDE", fontsize=16)
plt.xlabel("Total Bill ($)", fontsize=12)
plt.ylabel("Frequency", fontsize=12)

# Adjusting grid and layout
plt.grid(True, linestyle='--', alpha=0.7)

# Show the plot
plt.show()

