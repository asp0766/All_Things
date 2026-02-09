# __init__ function =
# print student name and marks


class Student:
    def __init__(self,name,marks) :
        self.name=name
        self.marks=marks
        print("add new data in database...")  # it will be repeat  
        
s1=Student("karan", 94)        
print(s1.name , s1.marks)

s2=Student("arjun", 98)
print(s2.name , s2.marks)