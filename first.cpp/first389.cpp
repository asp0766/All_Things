// Circular Queue : - 


#include<iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    CircularQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is Full" << endl;
            return;
        }
        if (front == -1) {  // First element insertion
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = data;
    }

    int dequeue() {
        if (isEmpty()) {
            return -1;
        }
        int ans = arr[front];
        if (front == rear) {  // Only one element was present
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
        return ans;
    }

    int getFront() {
        return isEmpty() ? -1 : arr[front];
    }
};

int main() {
    CircularQueue cq(5);

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60);  // Queue is full

    cout << "Front: " << cq.getFront() << endl;  // 10

    cout << "Dequeued: " << cq.dequeue() << endl;  // 10
    cout << "Dequeued: " << cq.dequeue() << endl;  // 20

    cq.enqueue(60);
    cq.enqueue(70);

    cout << "Front: " << cq.getFront() << endl;  // 30

    return 0;
}
