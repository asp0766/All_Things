//FUNCTION
// function template 
// we can use function all type of variables like int,float,char etc...

#include <iostream>
using namespace std;
template<class T>    // here we declare class of template
T maxim(T a,T b)
{
   return a>b?a:b;   // this is work like if else statements, otherwise we can use if else statement 
}                    //  ? = return , : = otherwise return 

int main()
{   
    cout<<maxim(12,14)<<endl;
    cout<<maxim(2.13f,4.45f)<<endl;

    return 0;
}