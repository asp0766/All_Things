//  InBuilt Sort : -


#include <iostream>
#include <algorithm> 
#include <vector>   

using namespace std; 
int main() {
   
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorting the array
    sort(arr, arr + n);

    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Example with a vector
    vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Sorting the vector
    sort(vec.begin(), vec.end());

    // Printing the sorted vector
    cout << "Sorted vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}