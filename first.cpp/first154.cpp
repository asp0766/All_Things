//OOPs
// Constructors
// default constructor we can edit length and breadth in it to make it other constructor

#include<iostream>
using namespace std;
class rectangle
{
    private:
        int length;
        int breadth;

    public:
        rectangle()
    {
            length=1;
            breadth=1;
    }

    int area()
    {
        return length*breadth;
    }
};

int main()
{
    rectangle r1;
    cout<<r1.area()<<endl;

}





