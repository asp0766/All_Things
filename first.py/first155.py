import plotly.graph_objects as go

# Sample data
labels = ['A', 'B', 'C', 'D', 'E']
sizes = [20, 35, 25, 10, 10]

# Create the interactive pie chart
fig = go.Figure(data=[go.Pie(labels=labels, values=sizes, hole=0.3)])

# Customize layout (optional)
fig.update_layout(title="Interactive Pie Chart")

fig.show()
