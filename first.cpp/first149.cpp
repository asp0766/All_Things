// FIBONACCI SERIRS 



#include <iostream>
using namespace std;

int main() {
    int n,first=0,second = 1, next;

    // Ask the user for the number of terms
    cout << "bhai tujhe fibbonacci series kha tk bananni h ? : ";
    cin >> n;


    // Generate the Fibonacci series
    for (int i = 1; i <= n; i++) {
        next = first + second;
        cout << "  " << next;
        first = second;
        second = next;
    }

    return 0;
}