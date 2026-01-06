// void pointer



#include <stdio.h>

void printValue(void *ptr, char type) {
    // Cast the void pointer to the appropriate type based on the 'type' argument
    if (type == 'i') {
        printf("Integer: %d\n", *(int *)ptr);
    } else if (type == 'f') {
        printf("Float: %.2f\n", *(float *)ptr);
    } else if (type == 'c') {
        printf("Character: %c\n", *(char *)ptr);
    } else {
        printf("Unknown type\n");
    }
}

int main() {
    int intValue = 10;
    float floatValue = 5.5;
    char charValue = 'A';

    // Declare void pointers
    void *voidPtr;

    // Assign the address of different data types to the void pointer
    voidPtr = &intValue;
    printValue(voidPtr, 'i');

    voidPtr = &floatValue;
    printValue(voidPtr, 'f');

    voidPtr = &charValue;
    printValue(voidPtr, 'c');

    return 0;
}