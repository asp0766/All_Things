// sum of all the number like 1234 = 1+2+3+4 = 10


#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0;
    cout<<"enter a number";
    cin>>n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=r;
    }

    cout<<sum<<endl;
    return 0;

}