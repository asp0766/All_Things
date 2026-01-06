//FUNCTION
// take 2 float number and add them  


#include <iostream>
using namespace std;

float add (float x ,float y )
{
    float z;
    z=x+y;
    return z;
}

int main()
{
    float x=2.3,y=7.9,z;
    z=add(x,y);
    cout<<z<<endl;
    return 0;
}

// cout<<add(2.3`,7.9)<<endl; --> this is also correct