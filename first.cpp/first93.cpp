//STRING 
// concateteting or add 2 strings  isme 2nd string se apne according words le skte h/...


#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20]="good";
    char s2[10]="morning";

    strncat(s1,s2,4);  // same as first92.cpp but here it changed here it's only take only 4 letters of s2

    cout<<s1<<endl;

    return 0;
}