// Using Structures with Dynamic Memory Allocation



#include <stdio.h>
#include <stdlib.h>

// Define a structure for a Person
struct Person {
    char name[50];
    int age;
};

int main() {
    // Dynamically allocate memory for a Person structure
    struct Person *p = (struct Person *)malloc(sizeof(struct Person));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values to the structure members
    snprintf(p->name, sizeof(p->name), "John Doe");
    p->age = 30;

    // Print the person's details
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);

    // Free the allocated memory
    free(p);

    return 0;
}