        #remember a thing is here that class name first letter will be capital always like "Phone"
         # objects are specific instances of a class
class Phone:
    def make_call(self):
        print("i am making a call")
    def play_game(self):
        print("i am playing a game")
        
p1= Phone()
p1.make_call()
p1.play_game()

#adding parameters to the class

class Phone:
    def set_color(self,color):
        self.color=color
    def set_cost(self,cost):
        self.cost=cost
    def show_color(self):
        return self.color
    def show_cost(self):
        return self.cost
    def make_call(self):
        print("make a call")
    def play_game(self):
        print("play a game")
        
p2=Phone()
p2.set_color("blue")
p2.show_color()


# creating a class with constructor , init method acts as the constructor
class Employee:
    def __init__(self,name,age,salary,gender):
         self.name= name
         self.age= age
         self.salary= salary
         self.gender= gender
         
    def show_employee_details(self):
        print("name of Employee is ",self.name)
        print("age of Employee is",self.age)
        print("salary of Employee is",self.salary)
        print("gender of Employee is",self.gender)
        
e1=Employee('ram',32,50000,'male')
e1.show_employee_details()