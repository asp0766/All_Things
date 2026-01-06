//STRING 
// finding length of a string by using string iterator

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str="welcome";
    string::iterator it;
    int count=0;
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<"length is : "<<*it<<endl;
        
    }
      

    return 0;
}