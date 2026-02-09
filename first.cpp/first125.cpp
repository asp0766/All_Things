//STRING
//ITERATOR  
// by using iterator print all the char value in capital letters

#include <iostream>
using namespace std;
int main()
{
    string str= "today";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        *it=*it-32;               // by minus 32 we print chars in capital letters
    }
     cout<<str;
    return 0;
}