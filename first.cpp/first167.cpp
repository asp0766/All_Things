// INHERITANCE 
// another example of inheritance


#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle(): length(0), breadth(0) {}
    rectangle(int l  , int b ) : length(l),breadth(b) {}
    rectangle(rectangle &r) : length(r.length),breadth(r.breadth) {}

    int getlength()
    {
        return length;
    }

    int getbreadth()
    {
        return breadth;
    }

    void setlength( int l)
    {
        length=l;
    }
    void setbreadth(int b)
    {
        breadth=b;
    }
    int area()
    {
        return length* breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    bool issquare()     // that's present rectangle is square  , bool=boolean = true and false (basics)
    {
        return length==breadth;
    }
    ~rectangle() {}    //destructor

};


class cuboid:public rectangle
{
    private:
    int height;

    public:
    cuboid(int h) : rectangle(0,0),height(h) {}
    

    int getheight()
    {
        return height;
    }
    
    void setheight(int h)
    {
        height=h;
    }

    int volume()
    {
        return getlength()*getbreadth()*height;
    }

};


int main()
{
    cuboid c(5);
    c.setlength(10);
    c.setbreadth(7);
    cout<<"volume is : "<<c.volume();

}