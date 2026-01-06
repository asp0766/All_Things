//STRING
// reading and printing string
// print all words if space it can print
#include <iostream>
using namespace std;
int main()
{
    char s[50];
    cout<<"enter name : ";
    cin.get(s,2 );      // WE CAN  use cin.getline(s,50) either of it...

    cout<<"welcome "<<s;


    return 0;

}