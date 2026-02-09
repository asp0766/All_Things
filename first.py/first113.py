# Access Modifiers 


class Employee:
    def __init__(self, name, emp_id):
        self.name = name              # Public attribute
        self.emp_id = emp_id          # Public attribute
        self._protected_attribute = "This is a protected attribute"  # Protected attribute
        self.__private_attribute = "This is a private attribute"    # Private attribute

    def show_details(self):
        print(f"Employee ID: {self.emp_id}, Name: {self.name}")
        print(self._protected_attribute)  # Accessing protected attribute
        print(self.__private_attribute)    # Accessing private attribute

class Programmer(Employee):
    def show_language(self):
        print("The Default Language Is Python")
        print(self._protected_attribute)  # Accessing protected attribute from the subclass
        # print(self.__private_attribute)  # This would raise an AttributeError

# Creating an instance of Employee
e1 = Employee("Rohan Das", 400)
e1.show_details()

# Creating an instance of Programmer
e2 = Programmer("Harry", 4002)
e2.show_details()
e2.show_language()

# Accessing public attributes
print(e1.name)  # Accessible
print(e1.emp_id)  # Accessible

# Accessing protected attribute (not recommended, but possible)
print(e1._protected_attribute)  # Accessible, but should be avoided

# Accessing private attribute (will raise an error)
# print(e1.__private_attribute)  # Uncommenting this line will raise an AttributeError