# Map , Filter & Reduce  in python

# Map
def cube(x):
    return x*x*x

l=[1,2,4,6,4,3] 
newl=list(map(cube ,l))
print(newl)


# Filter
def even(x):
    return x%2==0

l=[1,2,4,6,4,3] 
newl=list(filter(even ,l))
print(newl)


# Reduce
from functools import reduce
l=[1,2,4,6,4,3] 
sum=reduce(lambda x,y: x+y,l)
print(sum)



