// INHERITANCE 
//Constructor in INHERITANCE
 
//constructors of base class is executed first then the constructor of derived class is executed.
// By Default, non-parametersied constructor of base class is executed.
// parameterised constructor of base class must be called from derived class constructor.

//Explain using base class and derived class: 
#include<iostream>
using namespace std;

class base 
{
    public:
    base()
    {
        cout<<"Non-parameterised base "<<endl;
    }

    base (int x )
    {
        cout<<"parameterised of base "<<x<<endl;
    }
};

class derived: public base
{
    public:
    derived() : base()
    {
        cout<<"Non-parameterised derived"<<endl;
    }
    derived(int y) : base(y)
    {
        cout<<"parameterised of derived "<<y<<endl;
    }

    derived(int y, int z): base(y)
    {
        cout<<"parameterised of derived with two parameter "<<y<<" and "<<z<<endl;
    }
};

int main()
{
    derived d(5,10);
    return 0;
}