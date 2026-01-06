// FUNCTION 
// PARAMETER PASSING
// pass / call by address
/* --> address of actual parameters are passed 
   --> formal parameters must be pointers 
   --> formal parameters can indirectly access actual parameters
   --> changes done using formal parameters will reflect in actual parameters */

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int main()
{
    int x=10,y=20;
    swap(&x,&y);
    cout<<x<<" "<<y;
    return 0;

}