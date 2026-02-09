# list pratice questions :::
#  list is mutable means changeable

jon_show=["jon show","winterfell",30]

jon_show[2] +=3   #it's output will 27 & we can add also 
print(jon_show[2])

# USING RANGE ::: 

num_seq= range(0,100)
num_list = list(num_seq)
print(num_list)      # print numbers 1 to 100

# list - ception ::: 

world_cup_winners=[[2006,"italy"],[2010,"spain"],[2014,"germany"],[2018,"france"]]
print(world_cup_winners)  # print whole list

# sequential indexing ::: 

print(world_cup_winners[1][1][0])   # print s 


# merging list ::: 

part_a=[1,2,3,4,5]
part_b=[6,7,8,9,10]

c=part_a+part_b
print(c)        # merge means adds lists


# extend list :::
part_a=[1,2,3,4,5]
part_b=[6,7,8,9,10]
part_a.extend(part_b)   # extend means add but this command add many arguments in a list 
print(part_a)

# append command in list ::: 

num_list=[]
num_list.append(1)
num_list.append(2)
num_list.append(3)
print(num_list)         # append method only add arguments at one time 


# insert command in list :::

num_list=[1,2,3,4,5,6]
num_list.insert(3,4)    # adds duplicate integer in list 
print(num_list)

# removing elements ::: 

houses=["gryffindor","hufflepur","ravenclaw","slytherin"]
last_house=houses.pop()      # it's clear last element of the list
houses.remove("gryffindor")  # it's remove specific element in list 
print(houses)


# list slicing ::: 

num_list=[1,2,3,4,5,6,7,8,9,0]
print(num_list[2:5])            # it print the value by indexing 


# index search 
cities=["london","paris","beirut"]
print(cities.index("london"))   # it's print indexing value 


# in operator ::: 

cities=["london","paris","roorkee"]
print("london "  in cities)   # if it's exist then true if not then false 
print("jaipur" in cities )


# list sort ::: 
num_list=[20,40,60,80,50.4,30]
num_list.sort()                 # it's command clear last element 
print(num_list)



# LIST COMPREHENSION :::

# definition - a technique that uses a for loop and a condition to create a new list from an existing one

# creating a list comprehension :::
nums=[10,20,30,40,50]
nums_double=[]
for n in nums:
    nums_double.append(n * 2 )    # whole list multiplied by 2
    
print(nums)                       # print original list
print(nums_double)                # print multiplied list 



# adding a condition ::: 
nums=[10,20,30,40,50]
nums_double=[n*2 for n in nums if n % 4 == 0]  # here we add a condition by using if statement  
print(nums_double)



# using multiple lists :::
l1=[1,2,3,4,5]
l2=[6,7,8,9,0]
sum_list=[(n1,n2) for n1 in l1 for n2 in l2 if n1+n2 >10 ]
print(sum_list) # here is a condition that is sum of n1 and n2 should greater than 10



 

 

