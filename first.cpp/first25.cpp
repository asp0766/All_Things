// dynamic decleartion

#include <iostream>
using namespace std;
int main()
{
    int a=10,b=5;          //here we can see that we took 2 integers here a and b
    if(true)
    {
        int c=a+b;        /* in cpp we can take int under a condition like this but the life of int c is only allowed 
                          in only purple bracket that is use for if condition if we want to print c int then we can't*/

        cout<<c<<endl;    // we can also write a condition in IF block that is "if(c=a+b;c>10)":
    }
    return 0;
}