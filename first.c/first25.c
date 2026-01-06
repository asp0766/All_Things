// Pyramid Star Pattern



#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pyramid

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = i; j < rows; j++) {
            printf(" "); // Print space
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*"); // Print star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
