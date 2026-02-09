// FUNCTION 
// scoping rule :::


#include <iostream>
using namespace std;
int x=10;
int main()
{
    int x=20;
    {
        int x=30;
        cout<<x<<endl;  // it's print nearest value of integer that's availble nearest

    }
    cout<<x<<endl;     //  this command is outside of bracket that's the reason it's print nearest value that's availble outside of bracket
    cout<<::x<<endl;   // ::x this command is called global and by using double column we can use print global integer

    return 0;
}