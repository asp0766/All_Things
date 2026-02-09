# Scatter Plot in Matplotlib : -


import matplotlib.pyplot as plt

day=[1,2,3,4,5,6,7]
no=[2,3,1,4,5,3,6]
no2=[3,2,4,5,1,6,2]

# colors=["r","y","g","b","r","g","r"]
colors=[10,49,30,29,56,20,30]
sizes=[86,58,34,56,34,112,88]


# plt.scatter(day,no,c=colors,s=sizes,alpha=0.7,marker="*",edgecolor="g",linewidth=2)
plt.scatter(day,no,c=colors,s=sizes,alpha=0.5,cmap="viridis")
plt.scatter(day,no2,color="r",s=sizes,alpha=0.7)
t=plt.colorbar()

t.set_label("ColorBar",fontsize=12)
plt.title("Scatter Plot",fontsize=12)
plt.xlabel("Day",fontsize=10)
plt.ylabel("No.",fontsize=10)

plt.show()