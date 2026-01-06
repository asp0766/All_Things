// 23 . C++ 11

// Auto 

#include <iostream>
using namespace std;

float fun(){
    return 2.34f;
}

int main()
{
    double d = 12.3 ; 
    int i = 9 ; 
    auto x = 2 * d + i ;  // automatic find type of the data 
    cout<<x<<endl;

    auto y = fun();
    cout<<y; 

}