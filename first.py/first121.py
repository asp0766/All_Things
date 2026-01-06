# super keyword : - 


class parentclass:
    def parent_method(self):
        print("this is a parent method")
        
class childclass(parentclass):
    def parent_method(self):
        print("ASP")
        super().parent_method()
    def child_method(self):
        print("ths is a child method/ class")
        super().parent_method()
        
child_object = childclass()
child_object.child_method()
child_object.parent_method()




# Another Example : - 

class Employee:
  def __init__(self, name, id):
    self.name = name
    self.id = id

class Programmer(Employee):
  def __init__(self, name, id, lang):
    super().__init__( name, id)
    self.lang = lang

rohan = Employee("Rohan Das", "420")
harry = Programmer("Harry", "2345", "Python")
print(harry.name)
print(harry.id)
print(harry.lang)