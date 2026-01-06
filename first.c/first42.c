// static variable



#include <stdio.h>

// Function that uses a static variable
void counterFunction() {
    static int count = 0; // Static variable
    count++; // Increment the count
    printf("Count: %d\n", count);
}

int main() {
    // Call the function multiple times
    counterFunction(); // Output: Count: 1
    counterFunction(); // Output: Count: 2
    counterFunction(); // Output: Count: 3

    return 0;
}