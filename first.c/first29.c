// String Copying


#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20]; // Make sure the destination is large enough

    strcpy(destination, source); // Copy source to destination

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}