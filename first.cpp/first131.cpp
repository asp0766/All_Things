//STRING
// reverse a string and check a string is a palindrome


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "madam";
    string rev = "";

    int len = str.length();
    rev.resize(len);

    // Corrected loop for reversing the string
    for (int i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }

    // No need to add a null character for std::string
    // The string class manages null termination automatically.

    // Check if the string is a palindrome
    if (str == rev) {
        cout << "palindrome" << endl;
    } else {
        cout << "not palindrome" << endl;
    }

    return 0;
}


//////////////////////////////
#include <iostream>
#include <string>

using namespace std;  // Use the standard namespace

int main() {
    string str;  // Declare a string to hold user input
    cout << "Enter a string: ";
    getline(cin, str);  // Read the input string

    string rev;  // Create an empty string to hold the reversed string

    // Loop from the end of the input string to the beginning
    for (int i = str.length() - 1; i >= 0; --i) {
        rev += str[i];  // Append each character to the reversed string
    }

    cout << "Reversed string: " << rev << endl;  // Output the reversed string

    return 0;  // Indicate successful completion
}
