// dynamic memory allocation



#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    // Using malloc to allocate memory
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    arr = (int *)malloc(n * sizeof(int)); // Allocating memory for n integers
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Initializing the allocated memory
    for (i = 0; i < n; i++) {
        arr[i] = i + 1; // Assigning values
    }

    // Printing the allocated array
    printf("Allocated array using malloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Using realloc to resize the array
    printf("Enter new size for the array: ");
    scanf("%d", &n);
    
    arr = (int *)realloc(arr, n * sizeof(int)); // Resizing the memory
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1; // Exit if memory reallocation fails
    }

    // Initializing new elements if the size increased
    for (i = 0; i < n; i++) {
        arr[i] = i + 1; // Assigning values
    }

    // Printing the resized array
    printf("Resized array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr);
    return 0;
}