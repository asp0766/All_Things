// GOTO STATEMENT 



#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            goto exit_loop; // Jump to the exit_loop label when i is 5
        }
        printf("%d\n", i); // Print the current value of i
    }

exit_loop:
    printf("Exited the loop when i was %d\n", i);

    return 0;
}