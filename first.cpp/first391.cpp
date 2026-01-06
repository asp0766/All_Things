// Doubly Ended Queue : - 


#include <iostream>
using namespace std;

class Deque {
    int *arr;
    int front, rear;
    int size;

public:
    Deque(int size) {
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

    void insertFront(int data) {
        if (isFull()) {
            cout << "Deque is Full" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + size) % size;
        }
        arr[front] = data;
    }

    void insertRear(int data) {
        if (isFull()) {
            cout << "Deque is Full" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = data;
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

    int deleteRear() {
        if (isEmpty()) {
            return -1;
        }
        int ans = arr[rear];
        if (front == rear) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + size) % size;
        }
        return ans;
    }

    int getFront() {
        return isEmpty() ? -1 : arr[front];
    }

    int getRear() {
        return isEmpty() ? -1 : arr[rear];
    }
};

int main() {
    Deque dq(5);

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertFront(2);

    cout << "Front: " << dq.getFront() << endl;  // Output: 2
    cout << "Rear: " << dq.getRear() << endl;    // Output: 20

    cout << "Dequeued Front: " << dq.deleteFront() << endl;  // Output: 2
    cout << "Dequeued Rear: " << dq.deleteRear() << endl;    // Output: 20

    return 0;
}
