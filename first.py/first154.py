#  PIE Chart :  -
import matplotlib.pyplot as plt

# Sample data
labels = ['A', 'B', 'C', 'D', 'E']
sizes = [20, 35, 25, 10, 10]

# Exploding the first slice
explode = (0.1, 0, 0, 0, 0)  # Only "explode" the first slice

# Create the pie chart with all operations
plt.pie(sizes, labels=labels, autopct='%1.1f%%', startangle=90, colors=['skyblue', 'lightgreen', 'lightcoral', 'gold', 'lightpink'], 
        explode=explode, shadow=True, textprops={'fontsize': 12, 'fontweight': 'bold'})

# Equal aspect ratio ensures that pie is drawn as a circle.
plt.axis('equal')

# Adding a title
plt.title('Pie Chart with Multiple Operations')

# Adding a legend
plt.legend(labels, loc='best', fontsize=10)


plt.show()
