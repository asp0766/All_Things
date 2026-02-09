# LIST
# MUTABLE


l1=[1,"a",2,"b",3,"c"]
print(l1[4])

print(l1[2:5])

#changing the element at 0th index
l1=[1,"a",2,"b",3,"c"]
l1[0]=100
print(l1)

#POPPING THE LAST ELEMENT
l1=[1,2,3,4,5,6,7,8,9]
l1.pop()
print(l1)

#appending a new element
l1=[1,"a",2,"b",3,"c"]
l1.append("sparta")
print(l1)

#reversing elements of a list
l1=[1,2,3,4,5]
l1.reverse()
print(l1)

#sorting a list means fix by alphabetical sequence
l1=["mango","banana","guava"]
l1.sort()
print(l1)

#inserting element at a specified index
l1=[12,"a",2,"b",3,"c"]
b= l1.insert(4,"sparta")
print(l1)



