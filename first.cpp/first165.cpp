// INHERITANCE 


// example of a cuboid 

#include<iostream>
using namespace std;

class rectangle 
{
    private:
    int length;
    int breadth;


    public:
    rectangle(int l=0 , int b=0):length(l),breadth(b){}

    void setlength(int l)
    {
        length=l;
    }

    void setbreadth(int b)
    {
        breadth=b;
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

class cuboid:public rectangle
{
    private:
    int height;

    public:
    cuboid(int l=0 ,int b =0 , int h =0):rectangle(l,b),
    height(h){}
    void setheight(int h)
    {
        height=h;
    }

    int getheight()
    {
        return height;
    }

    int volume()
    {
        return getlength()*getbreadth()*height;
    }
};

int main()
{
    cuboid c(10,3,4);
    cout<<c.getlength()<<endl;
    cout<<c.getbreadth()<<endl;
    cout<<c.volume();

    return 0;
}



































// Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class (called a subclass or derived class) to inherit properties and behaviors (methods) from another class (called a superclass or base class). This promotes code reusability and establishes a hierarchical relationship between classes, enabling the subclass to extend or modify the functionality of the superclass.

// In C++, inheritance is indicated by using the colon (:) followed by the access specifier (such as public, protected, or private) and the name of the base class