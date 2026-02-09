//STRING 
// class string


#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str ;
    cout<<"enter a string : ";
    getline(cin,str);     // this function print all words that's we take by user

    cout<<"Hello "<<str<<endl;

    return 0;
}