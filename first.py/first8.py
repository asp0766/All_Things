# string

my_string="this is sparta"
b=(my_string[5:9])   #slicing
print(b)

#length of string
my_string= "this is sparta"
a=len(my_string)
print(a)

# converting string to lower case
my_string= "this is sparta"
b=my_string.lower()
print (b)

# converting string to upper case
my_string= "this is sparta"
print(my_string.upper())



 
 # replacing a substring
my_string = "this is sparta"
d= my_string.replace('i','z')
print(d)


#numbers of occurence of sub string
new_string="hello hello world"
e=new_string.count("hello")
print(e)


# finding the index of substring
s1= "this is sparta "
g= s1.find("sparta")
print(g)


#spilts in strings
fruit='i like apple , banana '
h=fruit.split(',')
print(h)

