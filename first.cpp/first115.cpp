//STRING 
// class string POP_BACK function
#include <iostream> 
#include <string>
using namespace std;
int main()
{
    string str = "hello";
     str.pop_back();
    cout<<str;             // here we  use pop_back function  that's erase any char from the string 
    return 0;             // if we write like this str.pop_back() by this it's erase last char of string
}                        // if we want to erase any specific char then we write indexing value of that char in bracket