// diviation between 2 nos and take input from user



#include <iostream>
using namespace std;
int main()                   //this is written compulsory in i code of cpp till now in future i don't know
{
    int a,b,c;            // if we want the result will come out in decimal then we can use float datatype except int 
    cout<<"enter 2 nos";
    cin>>a>>b;
    if (b==0)
    cout<<"teri maa ka  zero se divide nhi hota mc";

    else
    {
        c=a/b;
        cout<<c<<endl;

    }
    return 0;
    
}