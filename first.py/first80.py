# eg.


class Student:
    college_name = "COER university"
    
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks
    
    def welcome(self):
        print("Welcome", self.name)  
    
    def get_marks(self):
        return self.marks  # we can use here print statement both are same

s1 = Student("Karan", 98)
s1.welcome()
print(s1.get_marks())
