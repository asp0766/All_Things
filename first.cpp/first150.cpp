//OOPs
// writing a class


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
    rectangle r1,r2;
    r1.length=10;
    r1.breadth=5;
    cout<<r1.area()<<endl;

    r2.length=15;
    r2.breadth=10;
    cout<<r2.area();
}
