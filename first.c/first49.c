// dangling pointer



#include <stdio.h>
#include <stdlib.h>

void createDanglingPointer() {
    int *danglingPtr;
    {
        int localVar = 100; // Local variable
        danglingPtr = &localVar; // danglingPtr now points to localVar
    } // localVar goes out of scope here
    // danglingPtr is now a dangling pointer
    printf("Dangling Pointer Value: %d\n", *danglingPtr); // Undefined behavior
}

int main() {
    createDanglingPointer();
    return 0;
}