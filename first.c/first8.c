//  DO WHILE LOOP 
#include <stdio.h>

int main() {
    int number;

    // Initialize number to 0
    number = 0;

    // Do while loop
    do {
        printf("Enter a number (negative number to exit): ");
        scanf("%d", &number);

        if (number >= 0) {
            printf("You entered: %d\n", number);
        }

    } while (number >= 0); // Continue loop as long as number is non-negative

    printf("Exiting the loop. You entered a negative number: %d\n", number);

    return 0;
}