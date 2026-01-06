# WHILE LOOP



# looping statements are used to repeat a task multiple times , keep filling a bucket with a mug of water while it is not full

#keep repeating the song until you close the app
#get your salary credited at the end of each month


#while loop
#syntax: while condition : execute statements

i=1 
while i<=10:
    print(i)
    i=i+1
    
    
#
i=1
n=2
while i<=10:
    print(n,"*",i,"=",n*i)  
    i=i+1 


 
    
# while with list
l1=[1,2,3,4,5]
i=0 
while i<len(l1):
    l1[i]=l1[i]+100
    i=i+1
    print(l1)
    
# for loop is used to iterate over a sequence ( tuple,list,dictionary..)
#this is the syntax of for ""for loop"
#for val in sequence:body of for
l4 = ['mango','apple','grapes','orange']
for i in l4:
  print(i)
    
       
       
        
l1=['orange','black','white']
l2=['chair','book','laptop']
for k in l1:
    for j in l2:
        print(k,j)