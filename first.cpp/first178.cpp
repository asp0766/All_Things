// POLYMORPHISM



// same name different actions
// runtime polymorphism is achieved using functin overriding
// virtual functions are abstract functions of base class
// derived class must override virtual function
// base class pointer pointing to derived class object and a override function is called.


// SUMMARY : class car is defined , then sub classes override , then base class method made as virtual the pure virtual 
 

//  PURE Virtual Function 
//  A pure virtual function is a virtual function that has no definition in the base class.
//  It is declared using the = 0 syntax at the end of the function declaration.
//  A class that contains a pure virtual function is called an abstract class.

#include<iostream>
using namespace std;

class car
{
    public:
    virtual void start()=0; // = 0 means pure virtual function
    

    virtual void stop()=0;
    
}; 

class innova: public car 
{
    public:
    void start()
    {
        cout<<"innova started\n";
    }

    void stop()
    {
        cout<<"innova stopped";
    }
};


class swift: public car 
{
    public:
    void start()
    {
        cout<<"swift started";
    }

    void stop()
    {
        cout<<"swift stopped";
    }
};


int main()
{
    car *c=new innova();
    c->start();

    c=new swift();
    c->start();
}
// A pure virtual function is a function declared in a base class that has no implementation in that class and is meant to be overridden in derived classes. In C++, a pure virtual function is specified by assigning 0 to the function declaration in the base class. This makes the class abstract, meaning you cannot instantiate it directly; it can only be used as a base class for other derived classes.