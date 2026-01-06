//  Insertion Sort : - 
// pick an element from unsorted part & place it correctly in sorted part.

#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;

 
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev]; 
            prev--;
        }
        arr[prev + 1] = curr; 
    }
    
    print(arr, n); 
}

int main() {
    int arr[5] = {2, 45, 3, 56, 6};
    insertionsort(arr, 5);
    return 0;
}