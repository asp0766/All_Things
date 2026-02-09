// FRIEND AND STATIC MEMBERS INNER CLASSES

// INNER / NESTED CLASS 

#include<iostream>
using namespace std;

class outer
{
public:
    class inner1 // Renamed first inner class
    {
    public:
        void fun()
        {
            inner2 i; // Create an instance of the second inner class
            i.display(); // Call display method
        }
    };

    class inner2 // Renamed second inner class
    {
    public:
        void display()
        {
            cout << "display of inner" << endl;
        }
    };
};

int main()
{
    outer::inner1 i; // Create an instance of the first inner class
    i.fun(); // Call the fun method to display the message
    return 0;
}