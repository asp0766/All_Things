//FUNCTION
// function overloading 
//  add two int,three int and also add 2 float value in one program 

#include <iostream>
using namespace std;

int sum(int x , int y)      
{
    return x+y;
}

int sum(int x, int y, int z)
{
    return x+y+z;
}

float sum(float x,float y)
{
    return x+y;
}

int main()
{
    cout<<sum(10,15)<<endl;
    cout<<sum(10,15,20)<<endl;
    cout<<sum(2.12f,34.23f)<<endl;    // write 'f' is compulsory here  if we can't then code don't run

    return 0;
}
