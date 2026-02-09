// callback function



#include <stdio.h>

// Define a callback function type
typedef void (*Callback)(int);

// A function that takes a callback function as a parameter
void performOperation(int value, Callback callback) {
    // Call the callback function with the value
    callback(value);
}

// A sample callback function that prints the square of a number
void printSquare(int num) {
    printf("Square: %d\n", num * num);
}

// A sample callback function that prints the cube of a number
void printCube(int num) {
    printf("Cube: %d\n", num * num * num);
}

int main() {
    int number = 5;

    // Call performOperation with printSquare as the callback
    performOperation(number, printSquare);

    // Call performOperation with printCube as the callback
    performOperation(number, printCube);

    return 0;
}