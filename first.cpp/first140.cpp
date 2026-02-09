// FUNCTION 
// PARAMETER PASSING
// pass / call by value

#include <iostream>
using namespace std;
void swap(int &a , int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=10, y=20;   // here swapping doesn't perform bcz void task will be store in stack and it's automatic delete
                     // so  this is the reason 
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}
