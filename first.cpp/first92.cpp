//STRING 
// concateteting or add 2 strings


#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20]="good \t";   // \t is for tab space 
    char s2[10]="morning";

    strcat(s1,s2);

    cout<<s1<<endl;

    return 0;
}