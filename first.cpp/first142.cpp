// FUNCTION 
// PARAMETER PASSING
// pass / call by reference
/*--> actual parameters are passed as refernce
  --> formal parameters can directly access actual parameters 
  --> function call is converted into inline function, if not possible it will become call by address
  --> reference don't take extra memory 
  --> syntax is same as call by value except, formal parameters are reference  */

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
}

int main()
{
    int x=10 ,y=20; 
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}