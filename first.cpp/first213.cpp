// 20. Destructor and Virtual Destructors


#include <iostream>

using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    MyClass obj; // Constructor is called here

    // Do something with obj

    return 0; // Destructor is called here when obj goes out of scope
}