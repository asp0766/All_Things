// Push in Heap : -


#include <iostream>
using namespace std;

class MaxHeap {
public:
    int arr[100]; // Heap array
    int size; // Current size of heap

    MaxHeap() {
        size = 0;
    }

    void push(int val) {
        arr[size] = val; // Add at last position
        int i = size;
        size++;

        // Heapify up (Bubble up)
        while (i > 0 && arr[(i - 1) / 2] < arr[i]) {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2; // Move to parent
        }
    }

    void printHeap() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap h;
    h.push(10);
    h.push(20);
    h.push(15);
    h.push(30);
    h.push(40);

    cout << "Max Heap: ";
    h.printHeap(); 

    return 0;
}
