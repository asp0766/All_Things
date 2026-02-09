// POINTER 


//  null pointer

#include <stdio.h>

int main() {
    int *ptr = NULL; // Declare a null pointer

    // Check if the pointer is null before dereferencing
    if (ptr == NULL) {
        printf("Pointer is null. Cannot dereference it.\n");
    } else {
        // This block will not execute since ptr is null
        printf("Value pointed by ptr: %d\n", *ptr);
    }

    // Now let's assign a valid address to the pointer
    int num = 42;
    ptr = &num; // Point to the address of num

    // Now we can safely dereference the pointer
    if (ptr != NULL) {
        printf("Pointer is now pointing to a valid address.\n");
        printf("Value pointed by ptr: %d\n", *ptr);
    }

    return 0;
}