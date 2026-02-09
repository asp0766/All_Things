#  Getters & Setters 


class Person:
    def __init__(self, name):
        self._name = name  # Private attribute

    @property
    def name(self):
        return self._name  # Getter

    @name.setter
    def name(self, new_name):
        if not new_name:
            raise ValueError("Name cannot be empty.")
        self._name = new_name  # Setter

# Usage
person = Person("Alice")
print(person.name)  

person.name = "Bob"  # Using the setter
print(person.name)  

# person.name = ""  # This would raise a ValueError