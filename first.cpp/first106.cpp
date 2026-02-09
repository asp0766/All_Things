//STRING 
// class string CAPACITY function


#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str ;
    cout<<"enter a string : ";
    cin>>str;

    str.resize(50);

    cout<<str.capacity()<<endl;       


    return 0;
}