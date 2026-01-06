# data structure conversions :::


# converting to a list ::: 
star_wars_tup = ("anakin","darth",1000)
star_wars_set = {"anakin","darth",1000}
star_wars_dict = { 1 : "anakin" ,2 : "darth" , 3 : 1000}
star_wars_list=list(star_wars_tup)   # tuple to list
print(star_wars_list)

star_wars_list=list(star_wars_set)   # set to list
print(star_wars_list)

star_wars_list=list(star_wars_dict)   # set to dictionary
print(star_wars_list)



# converting to a tuple ::: 
star_wars_list = ["anakin","darth",1000]
star_wars_set = {"anakin","darth",1000}
star_wars_dict = { 1 : "anakin" ,2 : "darth" , 3 : 1000}
star_wars_tup=tuple(star_wars_list)   # list to tuple
print(star_wars_tup)
star_wars_tup=tuple(star_wars_set)    # set to tuple
print(star_wars_tup)
star_wars_tup=tuple(star_wars_dict)   # dict to tuple
print(star_wars_tup)




# converting to a set ::: 
star_wars_list = ["anakin","darth",1000]
star_wars_tup = ("anakin","darth",1000)
star_wars_dict = { 1 : "anakin" ,2 : "darth" , 3 : 1000}
star_wars_set=set(star_wars_list)   # list to set
print(star_wars_set)
star_wars_set=set(star_wars_tup)    # tuple to set
print(star_wars_set)
star_wars_set=set(star_wars_dict)   # dict to set
print(star_wars_set)



# converting to a dictionary ::: 
star_wars_list=[[1,"a"],[2,"b"],[3,"c"]]
star_wars_tup=((1,"a"),(2,"b"),(3,"c"))
star_wars_set={(1,"a"),(2,"b"),(3,"c")}
star_wars_dict=dict(star_wars_list)   # list to dictionary
print(star_wars_dict)
star_wars_dict=dict(star_wars_tup)    # tuple to dictionary 
print(star_wars_dict)
star_wars_dict=dict(star_wars_set)    # set to  dictionary 
print(star_wars_dict)


