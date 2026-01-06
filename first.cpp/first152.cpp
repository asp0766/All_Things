//OOPs
// data hiding 
// Hide internal implementation details to ensure stability, flexibility, and security


#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
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
    rectangle r;
    r.length=12;
    r.breadth=34;
    cout<<r.perimeter();
}