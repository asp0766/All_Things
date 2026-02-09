# function is a block of code which performs a specific task
# eg. function to deposit money, withdraw money , check balance , def= define
from re import X


def hello():
    print("hello world")
hello()

# 
def add_10(x):
   return x+10
s = add_10(10)
print(s)
    
# 
def odd_even(x):
    if x%2==0:
        print(x,"is even")
        
    else:
        print(x,"is odd")
        
q=odd_even(10)
print(q)

#lambda
g= lambda n: n*n*n 
n=(5)
print(g) 

#lambda with filter
l1=[10,45,87,67,24,90,23,58,89,13]
final_list=list(filter(lambda x: (x%2==0),l1))
print(final_list)

# lambda with map
l1= [ 1,2,3,4,5,6]
list_final_new=list(map(lambda x:x*2,l1))
print(list_final_new)



#  sum of all list integers
from functools import reduce
l1=[1,2,3,4,5,6]
sum=reduce(lambda x,y: x+y,l1)
print(sum)

