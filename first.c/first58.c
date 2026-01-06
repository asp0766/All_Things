// Fixing Memory Leaks



#include <stdio.h>
#include <stdlib.h>

void createMemoryLeak() {
    int *arr = malloc(10 * sizeof(int)); // Allocate memory for an array of 10 integers

    // Check if memory allocation was successful
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }

    // Use the allocated memory (e.g., fill the array)
    for (int i = 0; i < 10; i++) {
        arr[i] = i * i;
    }

    // Free the allocated memory to prevent memory leak
    free(arr);
}

int main() {
    for (int i = 0; i < 100000; i++) {
        createMemoryLeak(); // Call the function multiple times
    }

    return 0;
}