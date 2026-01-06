//STRING
//ITERATOR  
// by using iterator print all the char value

#include <iostream>
using namespace std;
int main()
{
    string str= "today";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it;
    }

    return 0;
}