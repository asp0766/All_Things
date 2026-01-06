# conitional statement
#   if elif  2nd example


marks=int(input("enter student marks :"))

if(marks>=90) :
    grade="A"
    
else : 
    if (marks>=80 &  marks <=60) :
        grade="B"
        
    else :
        grade="C"
        
        print("grade of yours : ",grade)
    


