//  array and pointer arithmetic 


// there are four arthimetic operators that can be used on pointers :
//  ++
//  -- 
//  +
//  - 

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    // Using pointer arithmetic to access array elements
    printf("Using pointer arithmetic:\n");
    
    // Accessing elements using pointer addition
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i)); // ptr + i gives the address of the i-th element
    }

    // Using pointer increment
    printf("\nUsing pointer increment:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *ptr); // Dereferencing the pointer
        ptr++; // Move to the next element
    }

    // Resetting pointer to the start of the array
    ptr = arr;

    // Using pointer decrement
    printf("\nUsing pointer decrement:\n");
    for (int i = 4; i >= 0; i--) {
        printf("Element %d: %d\n", i, *(ptr + i)); // ptr + i gives the address of the i-th element
    }

    // Using pointer subtraction
    printf("\nUsing pointer subtraction:\n");
    int *endPtr = arr + 5; // Pointer to one past the last element
    printf("Number of elements in the array: %ld\n", endPtr - ptr); // endPtr - ptr gives the number of elements

    return 0;
}



