// FUNCTION  
//default arguments 

#include <iostream>
using namespace std; 

int add(int x, int y, int z=0 )
{
    return x+y+z;
}

int main()
{   
    cout<<add(10,5)<<endl;   // if we don't take value of z then it's automatic take value of z=0 
    cout<<add(15,54,23)<<endl;    // if we take value of z then it's add all of three
    return 0;
}