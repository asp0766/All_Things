// Global Variables



#include <stdio.h>

int globalVar = 10; // Global variable

void function() {
    printf("Global Variable: %d\n", globalVar);
}

int main() {
    printf("Global Variable in main: %d\n", globalVar);
    function();
    return 0;
}