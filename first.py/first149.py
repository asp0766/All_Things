# Create a Chart : -


import matplotlib.pyplot as plt


x=["Python","C","C++","Java"]
y=[85,70,60,82]
plt.xlabel("Language", fontsize=15)
plt.ylabel("NO.", fontsize=15)
plt.title("WsTech CUBE", fontsize=15)
c=["y","b","m","g"]  #align color to bars 

# plt.bar(x,y,width=0.78,color=c,align="edge",edgecolor="r",linewidth=2,linestyle=":",alpha=0.7)

plt.bar(x,y,color=c,edgecolor="y",label="Popularity")



plt.show()
