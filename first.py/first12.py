# SET
# MUTABLE


#duplicates is not allowed in it

#update one dictionary's elements with another

s1 ={1,"a",'true',2,"b",'false'}
s1.add("hello")
print(s1)

#updating multiple elements
s1 = {1,"a",'true',2,"b",'false'}
s1.update([10,20])
print(s1)

#removing an element
s1 = {1,"a",'true',2,"b",'false'}
s1.remove("b")
print(s1)

#union of two sets
s3 = {1,2,3}
s4 = {4,5,6}
print(s3.union(s4))

# if statement of two sets  / search  common elements in set and print that element
s1 = {1,2,3,4,5,6}
s2 = {5,6,7}
print(s1.intersection(s2))