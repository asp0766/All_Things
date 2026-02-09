//  Structure



#include <stdio.h>
#include <string.h>

// Define a structure to represent a Student
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    // Declare a variable of type struct Student
    struct Student student1;

    // Assign values to the members of the structure
    strcpy(student1.name, "Alice");
    student1.age = 20;
    student1.grade = 88.5;

    // Print the values of the structure members
    printf("Student Name: %s\n", student1.name);
    printf("Student Age: %d\n", student1.age);
    printf("Student Grade: %.2f\n", student1.grade);

    return 0;
}