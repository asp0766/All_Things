// FUNCTION 


// call by reference 


// the call by reference method of passing arguments to a c function copied the address of the arguments into the formal parameters
// addresses of the actual arguments are copied and then asigned to the corresponding formal arguments



#include <stdio.h>

// Function that takes a pointer to an integer (call by reference)
void updateValue(int *num) {
    *num = *num + 10; // Modify the original variable using the pointer
    printf("Inside updateValue: num = %d\n", *num);
}

int main() {
    int originalValue = 20;
    
    printf("Before calling updateValue: originalValue = %d\n", originalValue);
    
    // Call the function with the address of originalValue
    updateValue(&originalValue);
    
    printf("After calling updateValue: originalValue = %d\n", originalValue);
    
    return 0;
}