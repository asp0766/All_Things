// Pointers to Structures



#include <stdio.h>

// Define a structure for a Point
struct Point {
    int x;
    int y;
};

// Function that modifies the Point using a pointer
void movePoint(struct Point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

int main() {
    struct Point p1 = {10, 20};

    printf("Original Point: (%d, %d)\n", p1.x, p1.y);

    // Move the point
    movePoint(&p1, 5, -3);

    printf("Moved Point: (%d, %d)\n", p1.x, p1.y);

    return 0;
}