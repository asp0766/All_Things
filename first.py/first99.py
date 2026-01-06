# except handling 



try:
    l=[1,5,6,7]
    i=int(input("enter the index : "))
    print(l[i])
    
except:
    print("some error occurrred")
    
finally:
    print("i am always executed")