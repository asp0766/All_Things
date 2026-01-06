// wild pointer



#include <stdio.h>

void wildPointerExample() {
    int *wildPtr; // Wild pointer, uninitialized
    // Attempting to dereference the wild pointer
    printf("Wild Pointer Value: %d\n", *wildPtr); // Undefined behavior
}

int main() {
    wildPointerExample();
    return 0;
}
