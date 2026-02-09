// reverse a palindrome number



#include <iostream>
using namespace std;
int main()
{
    int n,num,digit,rev=0;
    cout<<"enter a positive number";
    cin>>num;
    n=num;
    do
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    while (num!=0);
    
       cout<<"reverse number is :"<<rev<<endl;
 

    if (n==rev)
    cout<<"number is palindrome";
    else 
    cout<<"number is not palindrome";
    

    return 0;
    
}