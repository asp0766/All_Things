// Virtual Destructor


#include <iostream>

using namespace std;

class Base {
public:
    // Virtual Destructor
    virtual ~Base() {
        cout << "Base destructor called!" << endl;
    }
};

class Derived : public Base {
public:
    // Destructor
    ~Derived() {
        cout << "Derived destructor called!" << endl;
    }
};

int main() {
    Base *obj = new Derived(); // Create a Derived object but reference it as Base

    delete obj; // Properly calls both Derived and Base destructors

    return 0;
}