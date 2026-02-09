// GCD = greatest common dividor 
// GCD of 2 nnumbers


#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter 2 nos";
    cin>>m>>n;

    while (m!=n)
    {
        if(m>n)
        m=m-n;

        else if (m<n)
        n=n-m;
    }
     
     cout<<"GCD is "<<n; // we can write here m or n 
     return 0;
}