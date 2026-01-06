// INHERITANCE


// WAYS OF INHERITANCE


#include <iostream>
using namespace std;

class Parent {
private:
    int a;

protected:
    int b;

public:
    int c;

    void funParent() {
        a = 10;
        b = 5;
        c = 15;
    }
};

class Child : private Parent {
public:
    void funChild() {
        b = 5;  // Valid because b is protected in Parent
        c = 15; // Valid because c is public in Parent
    }

    // Function to access Parent's members
    void accessParent() {
        // You can access c here because it's public in Parent
        cout << "Accessing c from Child: " << c << endl;
        // b can be accessed here because it's protected
        cout << "Accessing b from Child: " << b << endl;
    }
};

class GrandChild : public Child {
public:
    void funGrandChild() {
        // Cannot access a, b, or c directly here
    }
};

int main() {
    Child c;
    c.funChild(); // Initialize b and c
    c.accessParent(); // Access Parent's public member c

    GrandChild gc;
    gc.funGrandChild(); // Cannot access Parent's members

    return 0;
}