# Pairplot : -


import seaborn as sns
import matplotlib.pyplot as plt

# Load a sample dataset
iris = sns.load_dataset("iris")

# Create a pairplot with operations
sns.pairplot(iris, hue="species", palette="coolwarm", markers=["o", "s", "D"])

# Customizing the plot
plt.suptitle("Pairplot of Iris Dataset", y=1.02, fontsize=18)

# Show the plot
plt.show()

