# exception handling 

a=input("enter a number :") 
print(f"multiplication table of {a} is : ")
try:
   for i in range (1,11):
    print(f"{int(a)} X {i} = {int(a)*i}")
except Exception as e:
    print(f" {a}  is not an integer number")