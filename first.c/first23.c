//  Right-Angled Triangle Star Pattern



#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the triangle

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* "); // Print star followed by a space
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}