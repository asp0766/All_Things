# Heatmap : -


import seaborn as sns
import matplotlib.pyplot as plt

# Load a sample dataset
tips = sns.load_dataset("tips")

# Select only numeric columns for correlation matrix
numeric_tips = tips.select_dtypes(include=['float64', 'int64'])

# Calculate the correlation matrix on numeric columns
corr = numeric_tips.corr()

# Create a heatmap with operations
sns.heatmap(corr, annot=True, cmap="coolwarm", linewidths=0.5, vmin=-1, vmax=1)

# Customizing the plot
plt.title("Correlation Heatmap of Tips Dataset", fontsize=16)
plt.xticks(rotation=45)
plt.yticks(rotation=0)

# Show the plot
plt.show()

