// POLYMORPHISM
// function overriding 
// redefining a function of a base class in derived class
// function overriding is used for achieving runtime polymorphism
// prototype of a overrides function must be exactly same as base class function 


#include<iostream>
using namespace std;

class parent
{
    public:
    void display()
    {
        cout<<"display of parent ";
    }
};

class child: public parent
{
    public:
    void display()
    {
        cout<<"display of child";
    }
};

int main()
{
    parent p;
    p.display();

    child c;
    c.display();


    return 0;
}



// Function overriding in C++ is a feature that allows a derived class to provide a specific implementation of a function that is already defined in its base class. This is a key aspect of polymorphism, enabling the derived class to modify or extend the behavior of the base class function. When a function is overridden , the derived class function is called instead of the base class function when invoked through a derived class object.