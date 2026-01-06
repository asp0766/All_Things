// array as arguments 



#include <stdio.h>

// Function to modify the elements of an array
void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 5; // Add 5 to each element
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]); // Calculate the number of elements

    printf("Before modifyArray: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    // Call the function with the array
    modifyArray(myArray, size);

    printf("After modifyArray: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}





// This example illustrates how to pass an array to a function in C. The function modifies the original array, demonstrating that arrays are passed by reference (via pointers) in C. Changes made to the array inside the function affect the original array in the calling function.