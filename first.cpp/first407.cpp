// Merge 2 Binary Max Heap : - 


#include <iostream>
#include <vector>
using namespace std;

// Heapify to maintain max heap property
void heapify(vector<int> &arr, int n, int i) {
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

// Build max heap from an array
void buildHeap(vector<int> &arr, int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

// Merge two max heaps
vector<int> mergeHeaps(vector<int> &heap1, vector<int> &heap2) {
    vector<int> mergedHeap;

    // Add all elements from both heaps
    for (int i : heap1)
        mergedHeap.push_back(i);
    for (int i : heap2)
        mergedHeap.push_back(i);

    // Build max heap from merged array
    buildHeap(mergedHeap, mergedHeap.size());

    return mergedHeap;
}

// Print the merged heap
void printHeap(vector<int> &heap) {
    for (int i : heap)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> heap1 = {10, 5, 6, 2};
    vector<int> heap2 = {12, 7, 9};

    vector<int> mergedHeap = mergeHeaps(heap1, heap2);

    cout << "Merged Max Heap: ";
    printHeap(mergedHeap);

    return 0;
}
