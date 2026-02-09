// Pop in Heap : - 


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
        arr[size] = val; 
        int i = size;
        size++;

        // Heapify-up (Bubble up)
        while (i > 0 && arr[(i - 1) / 2] < arr[i]) {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void pop() {
        if (size == 0) {
            cout << "Heap is empty!" << endl;
            return;
        }

        cout << "Popped: " << arr[0] << endl; 
        arr[0] = arr[size - 1]; // Replace root with last element
        size--; 

        // Heapify-down (Bubble down)
        int i = 0;
        while (true) {
            int left = 2 * i + 1, right = 2 * i + 2, largest = i;
            if (left < size && arr[left] > arr[largest]) largest = left;
            if (right < size && arr[right] > arr[largest]) largest = right;
            if (largest == i) break;

            swap(arr[i], arr[largest]);
            i = largest;
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
    h.push(40);
    h.push(30);
    h.push(15);
    h.push(10);
    h.push(20);

    cout << "Max Heap: ";
    h.printHeap();

    h.pop(); // Remove max element
    cout << "After Pop: ";
    h.printHeap();

    return 0;
}
