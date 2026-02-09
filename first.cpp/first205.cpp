// Polymorphism 


//  operator overloading

#include <iostream>
using namespace std;

class Rectangle {
public:
    int width, height;

    // Constructor
    Rectangle(int w, int h) : width(w), height(h) {}

    // Overloading the + operator to add areas of two rectangles
    int operator+(const Rectangle& rect) {
        return (width * height) + (rect.width * rect.height);
    }
};

int main() {
    Rectangle rect1(3, 4); // Rectangle with width 3 and height 4
    Rectangle rect2(5, 6); // Rectangle with width 5 and height 6

    // Using the overloaded + operator to add areas
    int totalArea = rect1 + rect2; // This calls the overloaded operator+

    cout << "Total Area: " << totalArea << endl; // Output the total area

    return 0;
}

