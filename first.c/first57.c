// memory leak 

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

    // Forgetting to free the allocated memory
    // free(arr); // This line is missing, causing a memory leak

    // The function ends, and the allocated memory is lost
}

int main() {
    for (int i = 0; i < 100000; i++) {
        createMemoryLeak(); // Call the function multiple times
    }

    // At this point, there is a memory leak because we never freed the allocated memory
    return 0;
}