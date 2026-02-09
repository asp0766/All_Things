//  typedef 



#include <stdio.h>
#include <string.h>

// Define a structure for a Student and create a type alias
typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    // Now you can use 'Student' directly as a type
    Student student1;

    // Assign values to the student
    snprintf(student1.name, sizeof(student1.name), "Alice");
    student1.age = 20;

    // Print the student's details
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);

    return 0;
}