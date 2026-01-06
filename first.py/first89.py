# SET :::
# a set is an unordered collection of data items ---

random_set={"educative",1408,3.14,(True, False)}
print(random_set)
print(len(random_set))



# adding an elements :::
random_set.add(123)   # only add one argument  
print(random_set)

random_set.update([12234,"xyz"])  # adds multiple elements in a SET
print(random_set)


# deleting elements  :::
random_set={"educative",1408,3.14,(True, False)}
random_set.discard(1408)    # it's only remove one argument 
print(random_set)

random_set.remove((True,False))   # remove multiple arguments 
print(random_set)



# ITERATING A SET :::
odd_list=[1,3,5,7]
unordered_set={9,10,11,12,13,14,15,16,17,24}
for num in unordered_set:
    if(not num % 2 == 0):    # if any number fully divided by 4 then it's automatic remove from list eg-12,16,24
        odd_list.append(num)       
print(odd_list)



# union :::
set_a={1,2,3,4}
set_b={'a','b','c','d'}
print(set_a.union(set_b))   # ad both set in one but not in proper order



# intersection ::: 
set_a={1,2,3,4,55}
set_b={1,2,3,4,5,6,7,8,9}    # takes only common variable from set 
print(set_a.intersection(set_b))



#difference :::
set_a={1,2,3,4}
set_b={2,8,4,16}
print(set_a - set_b)
print(set_a.difference(set_b))




