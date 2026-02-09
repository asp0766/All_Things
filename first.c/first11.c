// BREAK AND CONTINUE 


// break 

#include <stdio.h>

int main() {
    int numbers[] = {3, 5, 7, -2, 8, 10};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length; i++) {
        if (numbers[i] < 0) {
            printf("First negative number found: %d\n", numbers[i]);
            break; // Exit the loop when a negative number is found
        }
    }

    return 0;
}




// continue 

#include <stdio.h>

int main() {
    printf("Even numbers from 1 to 10:\n");

    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue; // Skip the rest of the loop for odd numbers
        }
        printf("%d\n", i); // This will only print even numbers
    }

    return 0;
}