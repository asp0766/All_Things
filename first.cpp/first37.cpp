// sum of n natural numbers
// by using while loop

#include <iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cout<<"enter n ";
    cin>>n;
    while(i<=n)  // less than equal to 
    {
        sum+=i;
        i++;

    }
    cout<<"sum of n natural no is "<<sum;

    return 0;
}