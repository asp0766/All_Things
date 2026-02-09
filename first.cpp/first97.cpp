//STRING 
// comparing string


#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20]="Hello";
    char s2[20]="Hello";    // output 0 bcz both are same

    cout<<strcmp(s1,s2);

    return 0;
}