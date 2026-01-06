# DICTIONARY 


# defination :- a dictionary stores key-values pairs, where each unique key is an index which holds value associated with it. 
# dictionary is unordered 


empty_dict={}

phone_book={"batman": 5334 ,
            "chersei": 3443, 
            "ghost ": 1123}
print(phone_book)       # print whole dictionary 



# dictionary constructor ::: 
phone_book=dict(batman=1233,cersei=56777,buster=1111)  # this is short method to print dictionary 
print(phone_book)



# accessing values ::: 
phone_book={"batman": 5334 ,
            "chersei": 3443, 
            "ghost": 1123}    #if we get space ghost after t then none wll be print if we want  to get value of ghost "SPACE MATTERS"
print(phone_book["chersei"])   # by this we can take value of any values of key
print(phone_book.get("ghost")) # it's also a method 



# adding / updating entries ::: 
phone_book={"batman": 5334 ,
            "chersei": 3443, 
            "ghost": 1123} 
phone_book["godzilla"]=46934   # add a key value pairs
phone_book["godzilla"] =99999  # update that values of this key 
print(phone_book)



# removing entries :::
phone_book={"batman": 5334 ,
            "chersei": 3443, 
            "ghost": 1123}
del phone_book["batman"]   # del is used for delete any pairs in dictionary 
print(phone_book)


phone_book={"batman": 5334 ,
            "chersei": 3443, 
            "ghost": 1123}
phone_book=phone_book.pop("chersei")  # it's pop but returns it's value
print(phone_book)




# length of a dictionary :::
phone_book={"batman": 5334 ,
            "chersei": 3443, 
            "ghost": 1123}
print(len(phone_book))     



# check exisiting element in dict :::
phone_book={"batman": 5334 ,
            "chersei": 3443, 
            "ghost": 1123}
print("batman" in phone_book)   # if yes then return true if not then return false 
print("god" in phone_book)



# copying contents :::    update method ---
phone_book={"batman": 5334 ,
            "chersei": 3443, 
            "ghost": 1123}
phone_book_1={"god":9999 , " aura ": -9999}
phone_book.update(phone_book_1)
print(phone_book)



# dictionary comprehension :::
houses={ 1:"gryfinndor", 2:"slytherin", 3: "hufflepuff", 4:"ravenclaw" }
new_houses={n ** 2 : house + "!"  for (n,house) in houses.items()} #sqaure of numbers and add ! after values.
print(new_houses)                                                  # ** means taking square of any number

 
