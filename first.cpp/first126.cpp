//STRING 
//ITERATOR  REVERSE function
// by using iterator print all the char value 

#include <iostream>
using namespace std;
int main()
{
    string str= "today";
    string::reverse_iterator it;         // that is command for reverse iterator
    for(it=str.rbegin();it!=str.rend();it++)
    {
        cout<<*it;
    }

    return 0;
}