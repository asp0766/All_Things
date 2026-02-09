//STRING 
// finding length of a string by using for loop

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str="welcome";
    int count=0;        
    for(int i=0;str[i]!='\0';i++)
    {
       count++;
    }
    cout<<"length is : "<<count<<endl; 

    return 0;
}