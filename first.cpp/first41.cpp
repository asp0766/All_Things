//prime number


// prime numer is that divide only itself and 1 that is prime number

#include <iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++)
     {
        if ( n%i==0)
        { count++; 
        }
     }

     if (count ==2 )
     cout<<"it is prime number";
     else
     cout<<"not a prime number";

     return 0;
     

}
