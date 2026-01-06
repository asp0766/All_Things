// local variable



#include <stdio.h>

void function() {
    int localVar = 5; // Local variable
    printf("Local Variable: %d\n", localVar);
}

int main() {
    function();
    // printf("%d", localVar); // This would cause a compile error since localVar is not accessible here
    return 0;
}