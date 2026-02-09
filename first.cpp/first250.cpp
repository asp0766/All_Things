//  Rotated Sort : -


#include <iostream>
using namespace std;

// Function to search in rotated sorted array
int search(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;

        // Left half is sorted
        if (arr[left] <= arr[mid]) {
            if (target >= arr[left] && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        // Right half is sorted
        else {
            if (target > arr[mid] && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1; // Target not found
}

// Driver function
int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    int index = search(arr, n, target);
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";
    
    return 0;
}
