# if else statements





#condition = if it is raining : sit inside 
#else go out and play football
#condition2 = >70% : get icecream , else: give pratice test
#if(condition)={ statement to be executed}
#else={statement is not to be executed}

#eg-
a= 10 
b=20  
if b>a :
    print( "b is greater than a ")
    
    
    
if a>b :
    print(" a is greater than b ")
    
    
    
else:
    print("b is greater than a")
    

#elif= else if 

a=10  
b=20  
c=30  
if(c>a)&(c>b):
    print("c is the greatest")
elif (b>a) & (b>c) :
    print("b is the greatest") #elif work like if , if condition not true then there is no print showing in terminal
    
else:
    print("c is the greatest")
    
    
    
#if with tuple

tup1=('a','b','c')
if'a' in tup1:
      print("value is present in tup1")
    


# if with list 
    
l1=['a','b','c']
if l1[1]=='b':
    l1[1]='z'
    print(l1)
    
    
    
# if with dictionary

    d1= {'k1':10,'k2':20,'k3':30}
    if d1['k3'] == 30:
        d1['k3']=d1['k3']+100
        print(d1)