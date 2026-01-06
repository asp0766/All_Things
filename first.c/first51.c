// c preprocessor



#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

#ifdef DEBUG
#define LOG(msg) printf("DEBUG: %s\n", msg)
#else
#define LOG(msg) // No-op
#endif

int main() {
    double radius = 5.0;
    double area = PI * SQUARE(radius);
    
    LOG("Calculating area");
    
    printf("Area of the circle: %.2f\n", area);
    return 0;
}