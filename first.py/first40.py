# tuple 
#WAP to check  string, list is palindrome or not ---

l1=[1,2,1]
copy_l1=l1.copy()
copy_l1.reverse()

if (copy_l1==l1) :
    print("palindrome")
    
else :
    print("not palindrome")