//STRING 
// class string FIND_FIRST_OF function
#include <iostream> 
#include <string>
using namespace std;
int main()
{
    string str1 = "hello";
  
    cout<<str1.find_first_of("o")<<endl;     // here we use find function that's give indexing value of char  
    return 0;                               // like same we use find_last_of method like this
}