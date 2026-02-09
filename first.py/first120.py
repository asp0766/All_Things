# dir , __dict__ , help Methods : - 

x =[1,2,3]
print(dir(x))
print(x.__add__)
# the dir() function returns a list of all attributes and methods (including dunder methods) availble for an objrct . it is a useful tool for discovering what you can do with an object .


class person: 
    def __init__(self,name,age):
        self.name=name
        self.age=age       
p = person("John",30)
print(p.__dict__)
# the __dict__ attribute returns a dictionary representation of an object's attributes . it is useful tool for introspection.

print(help(str))
print(help(person))
# the help() function is used to get help documentationfor an onject, including a description of its attributes and methods.