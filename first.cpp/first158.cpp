// OOPs 
// structure vs class 


#include<iostream>
using namespace std;

struct demo
{
    int x;
    int y;

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    demo d;
    d.x=10;
    d.y=20;
    d.display();
}




// Default Access Modifier:

// Class: Members are private by default.
// Structure: Members are public by default.
// Inheritance:

// Class: Default inheritance is private.
// Structure: Default inheritance is public.
// Use Cases:

// Class: Used for encapsulating data and behavior (OOP).
// Structure: Used for grouping simple data types.
// Member Functions:

// Both can have member functions, but classes are more focused on behavior.
// In essence, classes are more oriented towards object-oriented programming, while structures are used for simpler data grouping.

