// Ellipsis
// • Used for defining variable argument functions
// • ... is used as symbol of ellipsis
// • Printf and scanf of C language are example of ellipsis
   


#include <iostream>
#include <cstdarg> // Include for variadic functions

using namespace std;

int sum(int n, ...) // First parameter is the count of numbers
{
    va_list list;
    va_start(list, n); // Initialize the va_list with the last fixed parameter

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int x = va_arg(list, int); // Get the next argument
        s += x; // Add it to the sum
    }

    va_end(list); // Clean up the va_list
    return s;
}

int main()
{
    cout << sum(4, 23, 5, 67, 88) << endl; // 4 numbers
    cout << sum(5, 23, 52, 578, 22, 57) << endl; // 5 numbers
    return 0;
}