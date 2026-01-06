// pointers
// print some types of pointers


#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;         // & = amperson

    cout<<a<<endl;     // print a
    cout<<&a<<endl;    // print address of a
    cout<<p<<endl;     // print p means indirectly address of a
    cout<<&p<<endl;   // print address of p
    cout<<*p<<endl;   // print p
    (*p)++;
    cout<<a<<endl;    // increasement 


    return 0;

}