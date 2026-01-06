// functions


// functions are used to divide a large c program into small pieces
// a function can be called multiple times to provide reusability and modularity to the c program 
// also called procedure or subroutine



#include <stdio.h>

// Function prototype
int sum(int a, int b);

int main() {
    int num1, num2, result;

    // Prompt user for input
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Call the sum function
    result = sum(num1, num2);

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

// Function definition
int sum(int a, int b) {
    return a + b; // Return the sum of a and b
}