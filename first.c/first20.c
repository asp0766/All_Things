//  FUNCTION

//  when a function is called , the values (expressions) that are passed in the call are called the arguments or actual parameters. 
// formal parameters are local variables which are assigned values from the arguments when the function is called 


//  call by value


// when we call a function by value , it means that we are passing the values of the arguments which are copied into the formal parameters of the function. 
// whuch means that the original values remain unchanged and only the parameters inside the function changes 


#include <stdio.h>

// Function that takes an integer as an argument (call by value)
void updateValue(int num) {
    num = num + 10; // Modify the local copy of the variable
    printf("Inside updateValue: num = %d\n", num);
}

int main() {
    int originalValue = 20;
    
    printf("Before calling updateValue: originalValue = %d\n", originalValue);
    
    // Call the function with originalValue
    updateValue(originalValue);
    
    printf("After calling updateValue: originalValue = %d\n", originalValue);
    
    return 0;
}