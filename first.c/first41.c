// union



#include <stdio.h>
#include <string.h>

// Define a union for a Data type
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data; // Declare a union variable

    // Assign an integer value
    data.i = 10;
    printf("data.i: %d\n", data.i);

    // Assign a float value (overwrites the integer value)
    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);
    printf("data.i (after assigning float): %d\n", data.i); // Undefined behavior

    // Assign a string value (overwrites the float value)
    strncpy(data.str, "Hello, Union!", sizeof(data.str));
    printf("data.str: %s\n", data.str);
    printf("data.f (after assigning string): %.2f\n", data.f); // Undefined behavior

    return 0;
}