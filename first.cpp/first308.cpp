// Heap : - 


// heap is a complete BT (CBT)
// CPBT is a BT where all levels are filled except maybe the last one , which is filled from left to right
// Parent => Children  Max Heap

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;  
    int left = 2 * i + 1; 
    int right = 2 * i + 2;  

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]); 
        heapify(arr, n, largest);
    }
}

void buildHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i);
}

int main() {
    int arr[] = {3, 5, 1, 10, 2, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    buildHeap(arr, n);

    cout << "Max Heap: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

