// finding a perfect number

#include <iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter n";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if (n*2==sum)
    cout<<"perfect number";
    else
    cout<<"not perfect number";

    return 0;
}



// perfect number defination :::
// The smallest perfect number is 6. Its divisors are 1, 2, and 3. When you add them together: [ 1 + 2 + 3 = 6 ] Since the sum of its proper divisors equals the number itself, 6 is a perfect number.