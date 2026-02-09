//STRING 
// class string INSERT function
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello ";
   
    cout<<str.insert(2,"bye")<<endl;  // here we insert bye from 2nd char then output=hebyello

    return 0;
}