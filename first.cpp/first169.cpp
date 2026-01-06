// INHERITANCE 
// access Specifiers
// private - accessible only inside a class
// protected - accessible inside a class and inside derived classes
// public - accessible inside class , inside derived class and upon object 


#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    void setlength(int l)
    {
        if(l>0)
        length=l;
        else
        length=1;
    }

    void setbreadth(int b)
    {
        if(b>0)
        breadth=b;
        else
        breadth=1;
    }

    int getlength()
    {
        return length;
    }

    int getbreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    rectangle r1;
    r1.setlength(10);
    r1.setbreadth(5);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<"length : "<<r1.getlength()<<endl;
    cout<<"breadth : "<<r1.getbreadth()<<endl;
}



// Access specifiers in C++ are keywords that determine the accessibility of class members (attributes and methods) from outside the class. They control how the members can be accessed, and there are three main access specifiers:

// public: Members declared as public are accessible from outside the class. This means that any code that has access to an instance of the class can directly access its public members.

// private: Members declared as private are accessible only within the class itself. This means that they cannot be accessed or modified directly from outside the class. Private members are typically used to encapsulate the internal state of an object and protect it from unintended interference.

// protected: Members declared as protected are accessible within the class and by derived classes (subclasses). This means that while they cannot be accessed from outside the class, they can be accessed in any class that inherits from the base class.