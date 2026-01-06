//  STRING


// Declaring and Initializing a String

#include <stdio.h>

int main() {
    // Declaring a string using a character array
    char str1[20] = "Hello, World!"; // Initialized with a string literal

    // Declaring a string with individual characters
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Manually adding null terminator

    // Printing the strings
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}




// In C, strings are handled as arrays of characters, and various functions from the <string.h> library are available for common string operations such as copying, concatenation, length calculation, and comparison. Always remember to ensure that your character arrays are large enough to hold the strings you are working with, including the null terminator.




// strlen(s): Returns the length of string s (excluding the null terminator).
// strcpy(dest, src): Copies the string src to dest.
// strcat(dest, src): Appends the string src to the end of dest.
// strcmp(s1, s2): Compares strings s1 and s2 and returns an integer indicating their lexicographical order.
// strchr(s, c): Returns a pointer to the first occurrence of character c in string s.
// strstr(s, sub): Returns a pointer to the first occurrence of substring sub in string s.
// strncpy(dest, src, n): Copies up to n characters from src to dest.
// strncat(dest, src, n): Appends up to n characters from src to dest.
// strncmp(s1, s2, n): Compares the first n characters of strings s1 and s2.