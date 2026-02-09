//STRING
//PRINT  all value with  equal to sign , semicolon and integer using pointer and string


#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[20]="x=10; y=20; z=35";
    char *token=strtok(s1,"=;");
    while (token != NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }

    return 0;
}