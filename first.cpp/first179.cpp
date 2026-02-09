// POLYMORPHISM


//  ABSTRACT CLASSES

// class having pure virtual function is a abstract class
// abstract class can have concrete also
// object of abstract class cannot be created 
// derived class can must override pure virtual function , otherwise it will also become a abstract class
// pointer of abstract class can be created
// pointer of abstract class can hold object of derived class
// abstract classes are used for achieving polymorphism 
//  base class can be concrete 
// abstract with some concrete and some pure virtual functions 
//  all virtual functions




#include<iostream>
using namespace std;

class base 
{
    public:
    virtual void fun1()=0; // pure virtual function
    virtual void fun2()=0;  // pure virtual function
};

class derived : public base
{
    public: 
    void fun1()
    {
        cout<<"fun1 of derived"<<endl;
    }

    void fun2()
    {
        cout<<"fun2 of derived"<<endl;
    }
};


int main()
{
    derived d;
    d.fun1();
    d.fun2();
}