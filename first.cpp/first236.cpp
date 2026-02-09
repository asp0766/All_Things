// Counting Sort : -
//  use a frequency count of elements from minimum to maximum.


#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std; 

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countsort(int arr[], int n) {
    int freq[10000] = {0}; // Range
    int minVal = INT_MAX, maxVal = INT_MIN;

    // Find the minimum and maximum values in the array
    for (int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 1st Step - Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // 2nd Step - Reconstruct the sorted array
    int index = 0; // Index for the sorted array
    for (int i = minVal; i <= maxVal; i++) {
        while (freq[i] > 0) {
            arr[index++] = i; // Place the element in the sorted array
            freq[i]--; // Decrease the frequency
        }
    }
}

int main() {
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    countsort(arr, 8);
    print(arr, 8); 
    return 0;
}