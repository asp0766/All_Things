// BUBBLE SORT IN ARRAY 



#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print the original array
    }
    cout << endl;

    // Bubble Sort implementation
    for (int i = 0; i < n - 1; i++) { // Traverse through all array elements
        for (int j = 0; j < n - i - 1; j++) { // Last i elements are already sorted
            if (arr[j] > arr[j + 1]) { // Compare adjacent elements
                // Swap if the element found is greater than the next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print the sorted array
    }
    cout << endl;

    return 0;
}