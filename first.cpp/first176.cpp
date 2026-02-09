// POLYMORPHISM


//Virtual Function

// virtual functions are used for achieving polymorphism
// base class can have virtual functions
// virtual functions can be overrides in derived class
// pure virtual functions must be overridesby derived class


// calling overided method


#include<iostream>
using namespace std;

class base
{
    public:
     virtual void fun()
    {
        cout<<"fun of base";
    }
};



class derived : public base 
{
    public: 
    void fun()
    {
        cout<<"fun of derived\n";
    }
};


int main()
{
    base *p=new derived();
    p->fun();

    derived d;
    d.fun();


    return 0;
}