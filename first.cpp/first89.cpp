//STRING
// now we can take input from user  for 2 times
// reading and printing string
// print all words if space it can print
#include <iostream>
using namespace std;
int main()
{
    char s[50];
    cout<<"enter name  ";
    cin.getline(s,50);      

    cout<<"welcome "<<s<<endl;


     char s2[50];
    cout<<"enter name again please  ";
    cin.getline(s2,50);      

    cout<<"welcome "<<s2;


    return 0;

}