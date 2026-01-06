//STRING
// print int and float value in string '


#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[10]="235";
    char s2[10]="54.78";

    int x = strtol (s1,NULL,10);
    float y = strtof (s2,NULL);
    cout<<x+10<<endl<<y-23.5<<endl;

    return 0;
}