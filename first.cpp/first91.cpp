//STRING 
// finding length of a string by using pointer


#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    char* p = str; // Initialize a pointer to the start of the string
    int length = 0;

    while (*p != '\0') { // Loop until the null character is reached
        length++;
        p++; // Move the pointer to the next character
    }

    cout << "Length of the string: " << length << endl;

    return 0;
}