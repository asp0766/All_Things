// FUNCTION 
// PARAMETER PASSING
// return by address
/* --> a function can return of memory 
   --> it should not return address of local variables, which will be disposed after function ends
   --> it can return address of memory allocated in heap */


#include <iostream>
using namespace std;
int *fun()
{
    int *p=new int[5];
    for(int i =0;i<5;i++)
    {
        p[i]=5*i;
    }
    cout<<p<<endl;
    return p;
}

int main()
{
    int *q=fun();
    for(int i =0;i<5;i++)
    cout<<q[i]<<endl;
}