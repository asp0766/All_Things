// Input Restricted Queue : - 


#include <iostream>
using namespace std;

class InputRestrictedQueue {
    int *arr;
    int front, rear;
    int size;

public:
    InputRestrictedQueue(int size) {
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

    void insertRear(int data) {
        if (isFull()) {
            cout << "Queue is Full" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = data;
    }

    void insertFront(int data) {
        if (isFull()) {
            cout << "Queue is Full" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + size) % size;
        }
        arr[front] = data;
    }

    int deleteFront() {
        if (isEmpty()) {
            return -1;
        }
        int ans = arr[front];
        if (front == rear) {
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
    InputRestrictedQueue q(5);

    q.insertRear(10);
    q.insertRear(20);
    q.insertRear(30);
    q.insertFront(5);

    cout << "Front: " << q.getFront() << endl;  // Output: 5

    cout << "Dequeued: " << q.deleteFront() << endl;  // Output: 5
    cout << "Dequeued: " << q.deleteFront() << endl;  // Output: 10

    return 0;
}
