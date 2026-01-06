# CHAPTER 9 : OOPs



# eg.2 = 



class Student:
    def __init__(self,name,marks):
        self.name=name
        self.marks=marks
        
    def get_avg(self):
       sum=0 
       for val in self.marks:
           sum +=val
       print("hi",self.name,"your avg score is : ", sum/3)    
       
       
s1= Student("ASP", [ 98,89,94])       
s1.get_avg()