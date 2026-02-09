// reverse a number



#include <iostream>
using namespace std;
int main()
{
    int n,r,rev=0;
    cout<<"enter n  ";
    cin>>n;

    while(n!=0)    // if we write contion n>0 then minus number cannot come in reversed form.
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;

    }
    cout<<"reverse number is "<<rev;
    return 0;

}