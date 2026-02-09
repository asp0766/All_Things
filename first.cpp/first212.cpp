//  Namespaces 


#include <iostream>
using namespace std;


namespace first
{
void fun()
    {
    cout<<"first"<<endl;
    }
};


namespace second
{
void fun()
    {
    cout<<"second"<<endl;
    }
};
// using namespace first       we can use it to print first function without scope resolution operator
int main()
{
    first::fun();
    second::fun();

}