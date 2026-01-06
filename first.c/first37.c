// Passing Structures to Functions



#include <stdio.h>

// Define a structure for a Rectangle
struct Rectangle {
    int length;
    int width;
};

// Function to calculate area (pass by value)
int areaByValue(struct Rectangle rect) {
    return rect.length * rect.width;
}

// Function to calculate perimeter (pass by reference)
int perimeterByReference(struct Rectangle *rect) {
    return 2 * (rect->length + rect->width);
}

int main() {
    struct Rectangle rect = {10, 5};

    // Calculate area
    int area = areaByValue(rect);
    printf("Area: %d\n", area);

    // Calculate perimeter
    int perimeter = perimeterByReference(&rect);
    printf("Perimeter: %d\n", perimeter);

    return 0;
}