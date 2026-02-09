// Using Arrays of Structures


#include <stdio.h>

// Define a structure to represent a Student
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Declare an array of Student structures
    struct Student students[3];

    // Input data for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Enter GPA for student %d: ", i + 1);
        scanf("%f", &students[i].gpa);
    }

    // Print the data of each student
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name: %s, Age: %d, GPA: %.2f\n", 
               i + 1, students[i].name, students[i].age, students[i].gpa);
    }

    return 0;
}