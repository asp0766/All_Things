#  DICTIONARY
#  MUTABLE


#apple is key and 10 is value here
d1={"apple" : 10, "banana" : 20 , " orange" : 30}
s=d1.keys()
print(s)


d2={"apple" : 10, "banana" : 20 , " orange" : 30}
s=d2.values()
print(s)

#adding a new element
fruit= {"apple":10 ,"orange":20}
fruit['banana'] = 50 
print(fruit)


# changing an existing element
fruit = {"apple":10 ,"banana": 20}
fruit['apple'] = 40
print(fruit)

#update one dicitnonous elements with another
d1 = {"apple" : 10 , "orange" : 20}
d2 = {"banana" : 30 , "guava" : 40}
d1.update(d2)
print(d1)

 
#popping an element 
d1={"apple":10,"orange":20}
d1.pop("orange")
print(d1)