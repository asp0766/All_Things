//POINTER 

// variable which stores the address of another variable 
// can be of type int,char,array,function, or any other pointer
// size depends on the architecture : ex- 2 bytes , 32 bit
// pointer in c programming language can be declared using *(asterisk symbol)

#include <stdio.h>

int main() {
    int num = 5;        // Declare an integer variable
    int *ptr = &num;   // Declare a pointer and assign it the address of num

    printf("Value of num: %d\n", num);        // Print the original value
    printf("Value via pointer: %d\n", *ptr);  // Print the value using the pointer

    *ptr = 10;  // Change the value of num using the pointer

    printf("New value of num: %d\n", num);    // Print the updated value

    return 0;
}

