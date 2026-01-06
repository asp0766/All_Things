// recursion


// recursive function or recursion is a process when a function calls a copy of itself to work on a smaller problem
// any function which calls itself is called recursive function 
// this makes the life of programmer easy by dividing a given problem inti easier 
// a termination condition is imposed on such functions to stop them executing copies of themselves forever
// any problem that can be solved recursively , can also be solved iteratively

#include <stdio.h>

int main() {
    int num;
    long long factorial = 1; // Use long long to handle larger values

    // Prompt user for input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for non-negative input
    if (num < 0) {
        printf("Factorial is not defined for negative integers.\n");
    } else {
        // Calculate factorial iteratively
        for (int i = 1; i <= num; i++) {
            factorial *= i; // Multiply factorial by the current number
        }
        // Display the result
        printf("Factorial of %d is: %lld\n", num, factorial);
    }

    return 0;
}