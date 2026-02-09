// factorial of n numbers by using FOR LOOP

#include <iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"enter n ";
    cin>>n;
    

for(i=1;i<=n;i++)
{
    fact*=i;              // means fact=fact*i
}

    cout<<"factorial of "<<n<<" is "<<fact;  // here we write is because result will come out between of and is

    return 0;
}