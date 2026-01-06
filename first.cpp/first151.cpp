//OOPs
// pointer to object



#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;  // occcupy 2 bytes
    int breadth; // occupy 2 bytes
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
    rectangle *p;       //  pointer occupy 2 bytes 
    p=&r;
    r.length=10;
    p->length=100;     // -> arrow operator or caps  , dereferncing operator
    p->breadth=5;
    cout<<p->area();
}