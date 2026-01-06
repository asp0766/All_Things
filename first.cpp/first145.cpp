// FUNCTION 
// global vs local variables ::: 


#include <iostream>
using namespace std;

int g=0;      // here g is global variable means g is open source and access for whole program
void fun()
{
    int a=5;   // a is local variable
    g=g+a;
    cout<<g<<endl;
}

int main()
{
    int x=10;  // x is also local variable
    g=15;
    fun();
    g++;
    cout<<g;
}