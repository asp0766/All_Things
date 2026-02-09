//STRING 
// class string CLEAR  function


#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str ;
    cout<<"enter a string : ";
    cin>>str;
    str.clear();

    cout<<str<<endl;     // THIS IS the function that's clear the input


    return 0;
}