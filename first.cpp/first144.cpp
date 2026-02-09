// FUNCTION 
// PARAMETER PASSING
// return by reference
/*
  --> a function call return reference 
  --> it should not return reference of its local variables
  --> it can return formal parameters if they are reference */ 

#include <iostream>
using namespace std;
int &fun(int &x)
{
    return x;

}

int main()
{
    int a=10;
    fun(a)=25;
    cout<<a<<endl;
}