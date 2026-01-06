# except handling 
# stop a program on that point and print error message 


a=int(input("enter any value between 5 to 9 : "))
if(a<5 or a>9):
    raise ValueError("value should be between 5 and 9")

else:
    print(f"{a} = program execute without any error")