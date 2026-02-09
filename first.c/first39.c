// Array of Structures with Sorting



#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Include stdlib.h for qsort

// Define a structure for a Student
struct Student {
    char name[50];
    int age;
};

// Function to compare two students (used for sorting)
int compareStudents(const void *a, const void *b) {
    return strcmp(((struct Student *)a)->name, ((struct Student *)b)->name);
}

int main() {
    struct Student students[3] = {
        {"Alice", 20},
        {"Charlie", 22},
        {"Bob", 21}
    };

    // Sort the array of students by name
    qsort(students, 3, sizeof(struct Student), compareStudents);

    // Print sorted student details
    printf("Sorted Students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d\n", students[i].name, students[i].age);
    }

    return 0;
}