# APNA COLLEGE    ( 9 VIDEOS WAALI )   - END



# class and objects :::
class Employee:
    id=343 
    salary=60000
    name="asp"
    
    
print(Employee.name)



# initializer :::
class Employee:
    def __init__(self,id,salary,name):
        self.id=346 
        self.salary=34567
        self.name="asp" 
        
steve=Employee(346,34567,"asp")
        
print(steve.name,steve.id)
          
          
          
# class and instance variables :::
class player:
    teamname='liverpool'
    
    def __init__(self,name):
        self.name=name 
        self.formerteams=[]
        
p1 = player('mark')
p1.formerteams.append('barcelona')
p2=player('steve')
p2.formerteams.append('chelsea')

print(p1.name)

print(p1.teamname)



