//STRING 
// class string REPLACE function
#include <iostream> 
#include <string>
using namespace std;
int main()
{
    string str = "hello ";
  
    cout<<str.replace(3,5,"aa");             // here we replace l and o by a a ;
    
    return 0;
}