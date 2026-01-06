// OOPs
// Scope Resolution Operator 


#include<iostream>
using namespace std;

class rectangle
{
    private:
        int length;
        int breadth;

    public:

        rectangle(int l, int b) : length(l), breadth(b) {}

        int area()
        {
            return length * breadth;
        }

        int perimeter();
};

int rectangle::perimeter()  // scope resolution operator 
{
    return 2 * (length + breadth);
}

int main()
{
    rectangle r(10, 5);
    cout <<r.area() << endl;
    cout << r.perimeter() << endl;

    return 0;
}
