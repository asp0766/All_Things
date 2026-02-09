// Build A Max Heap : - 


#include<iostream>
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

// Build max heap
void buildHeap(int arr[], int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

// Print the heap
void printHeap(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    buildHeap(arr, n);

    cout << "Max Heap: ";
    printHeap(arr, n);

    return 0;
}
