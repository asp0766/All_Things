# Inheritance 


class employee:
    def __init__(self,name,id):
        self.name=name
        self.id=id
        
    def showDetails(self):
        print(f"The Name Of Employee :{self.id}  is {self.name}")
        
        
class programmer(employee):
    def showLanguage(self):
        print("The Default Language Is Python")
        
e1=employee("rohan das" , 400 )
e1.showDetails()

e2=programmer("Harry", 4002)
e2.showDetails()
e2.showLanguage()
