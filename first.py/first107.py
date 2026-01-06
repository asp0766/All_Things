# == and is operator  


a = [1, 2, 3]
b = [1, 2, 3]

print(a == b)  # Output: True (because the values are the same)


a = [1, 2, 3]
b = a  # b references the same list as a

print(a is b)  # Output: True (because both a and b point to the same object)

c = [1, 2, 3]  # c is a new list with the same values as a

print(a is c)  # Output: False (because a and c are different objects in memory)