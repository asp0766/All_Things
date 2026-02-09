# Constructor 


class Person:
    
    def __init__(self, n, o):
        print("Hei I Am a Person")
        self.name = n
        self.occ = o
        
    def info(self):
        print(f"{self.name} is a {self.occ}")

a = Person("Harry", "Developer")
b = Person("Rohan", "Student")
a.info()
b.info()
