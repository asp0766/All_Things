// nature of root , quadratic equation
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,d,root1,root2;
    cout<<"enter the value of a,b,c";
    cin>>a>>b>>c;
    d=b*b-4*a*c;

    if(d=0)
    {
        cout<<"roots are real and equal";
    }
    else 
    if(d>0)
   { cout<<"roots are real and unequal";}

return 0;
}