//OOPs
// data hiding (accessors and mutators)

/*Mutators (also known as setters): These functions modify or set the values of private member variables.
Here, setlength(int l) and setbreadth(int b) are the mutators. They set the values of length and breadth, respectively, with a condition that prevents negative values.

Accessors (also known as getters): These functions provide access to the values of private member variables without modifying them.
Here, getlength() and getbreadth() are the accessors. They return the values of length and breadth so that they can be read outside the class without directly accessing the private variables */

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
        if(l>=0)    // if l>=0 then output become 0 automatic
        length=l;
        else
        length=0;
    }
    void setbreadth(int b)
    {   if(b>=0)
        breadth=b;

        else 
        breadth=0;
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
        return length * breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};


int main()
{
    rectangle r;
    r.setlength(110);
    r.setbreadth(5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    cout<<r.getlength()<<endl;
}
