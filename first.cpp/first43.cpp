// ARMSTRONG NUMBER

/* example = take a number 153 -
1*1*1+5*5*5+3*3*3= 153 if cube of every single digit of 
a number then add all of it equal is equal to the number
then that is number is ARMSTRONG number 
let us write a program about it 
*/



#include <iostream>
using namespace std;
int main()
{
    int n,r,m,sum=0;
    cout<<"enter n";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r*r*r;
    }
     
    if (sum==m)
    cout<<"number is armstrong";
    else 
    cout<<"not armstrong";

    return 0;


}