//STRING 
// class string max_size function


#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str ;
    cout<<"enter a string : ";
    cin>>str;

    str.resize(50);

    cout<<str.max_size()<<endl;       


    return 0;
}