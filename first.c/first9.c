// WHILE LOOP 



#include <stdio.h>

int main() {
    int number;

    // Initialize number
    number = 0;

    // Prompt user for input
    printf("Enter a number (negative number to exit): ");

    // While loop
    while (1) { // Infinite loop
        scanf("%d", &number); // Read user input

        if (number < 0) { // Check for negative number
            break; // Exit the loop if negative number is entered
        }

        printf("You entered: %d\n", number); // Print the entered number
    }

    printf("Exiting the loop. You entered a negative number: %d\n", number);

    return 0;
}