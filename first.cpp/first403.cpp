// Priority Queue in Heap : - 


#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0 && heap[(index - 1) / 2] < heap[index]) {
            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    void heapifyDown(int index) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;

        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    // Insert element
    void push(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    // Remove and return the maximum element
    void pop() {
        if (heap.empty()) {
            cout << "Priority Queue is empty\n";
            return;
        }
        cout << heap[0] << " removed\n";
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    // Get the maximum element
    int top() {
        if (heap.empty()) {
            cout << "Priority Queue is empty\n";
            return -1;
        }
        return heap[0];
    }

    // Check if queue is empty
    bool empty() {
        return heap.empty();
    }

    // Print the queue
    void print() {
        for (int i : heap)
            cout << i << " ";
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(40);
    pq.push(15);

    pq.print();  // Print current queue

    cout << "Top element: " << pq.top() << endl;

    pq.pop();    // Remove highest priority element
    pq.print();

    return 0;
}
