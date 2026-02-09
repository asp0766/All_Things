// switch case
// by using switch case perform/run arthimetic operation(+,-,*,/)

#include <iostream>
using namespace std;
int main()
{
    cout<<"menu\n";
    cout<<"1. add\n"<<"2. sub\n"<<"3. mul\n"<<"4. div\n";
    int option;
    cout<<"enter your choice";
    cin>>option;
    int a,b,c;
    cout<<"enter 2 number";
    cin>>a>>b;

    switch(option)
    {
        case 1: c=a+b;
        break;

        case 2: c=a-b;
        break;

        case 3: c=a*b;
        break;

        case 4: c=a/b;
        break;

        
    }
    cout<<"result is "<<c<<endl;
    return 0;

}