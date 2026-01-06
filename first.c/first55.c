// on command line arguments


#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if the user provided a name
    if (argc < 2) {
        printf("Usage: %s <name>\n", argv[0]);
        return 1; // Return an error code
    }

    // Greet the user using the name provided as the first argument
    printf("Hello, %s!\n", argv[1]);
    
    return 0; // Successful completion
}