//STRING 
// copy a string and print it in another string


#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[10]="good";
    char s2[13]=" ";
    strcpy(s2,s1);   // if we write strncpy(s2,s1,2) then output=go  
    cout<<s2<<endl;

    return 0;
}