// INHERITANCE


// WAYS OF INHERITANCE

#include<iostream>
using namespace std;

class parent
{
    private: 
        int a;  
    protected: 
        int b;
    public: 
        int c;

        void funparent()
        {
            a = 10;
            b = 5;
            c = 15;
        }
};


class child: private parent 
{
    public:
        void funchild()
        {
            // Call the parent function to initialize members
            funparent(); // This will set b and c
            // Now we can access c since it's public in parent
            cout << "Value of c in child: " << c << endl;
            // b is protected, so we can access it here
            cout << "Value of b in child: " << b << endl;
        }
};


class grandchild : public child
{
    public:
        void fungrandchild()
        {
            // Can't access a, b, or c here due to access specifiers
        }
};

int main()
{
    child c;
    c.funchild(); // Call the child function to see output
    return 0;
}