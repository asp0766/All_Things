// Smart Pointers 


#include <iostream>
#include <memory> // Include the memory header for smart pointers

using namespace std;

class rectangle 
{
    private:
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{
    unique_ptr<rectangle> ptr(new rectangle(145, 23));
    cout << ptr->area() << endl;

    unique_ptr<rectangle> ptr1 = move(ptr); // Transfer ownership
    cout << ptr1->area() << endl;


    return 0;
}