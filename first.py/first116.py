#   Instance variables vs Class variables 

class Employee:
    companyName = "Google"
    def __init__(self, name):
        self.name = name
        self.raise_amount = 0.4  #Instance class
    
    def showDetails(self):
        print(f"The Name Of The Employee Is : {self.name} And Raise Amount is {self.raise_amount} in {self.companyName}" )
        
emp1 = Employee("Harry")
emp1.raise_amount = 0.5
emp1.showDetails()
Employee.showDetails(emp1)

emp2=Employee("Rohan")
emp2.showDetails()