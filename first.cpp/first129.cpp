//STRING 
// change upper case to lower case


#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="WELCOME";
    
    for(int i=0;str[i]!='\0';i++)    // '\0' = NULL char
    {
        str[i]=str[i]+32;
    }
       
       cout<<str<<endl;

    return 0;

}