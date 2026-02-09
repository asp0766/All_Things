// K Queues In An Array : -


#include <iostream>
using namespace std;

class KQueues {
    int *arr, *front, *rear, *next;
    int freeSpot, size, k;

public:
    KQueues(int k, int size) {
        this->k = k;
        this->size = size;
        arr = new int[size];
        front = new int[k];
        rear = new int[k];
        next = new int[size];

        // Initialize queue fronts and rears
        for (int i = 0; i < k; i++) {
            front[i] = rear[i] = -1;
        }

        // Initialize free spots and linking next
        freeSpot = 0;
        for (int i = 0; i < size - 1; i++) {
            next[i] = i + 1;
        }
        next[size - 1] = -1;
    }

    void enqueue(int data, int qn) {
        if (freeSpot == -1) {
            cout << "Queue Overflow\n";
            return;
        }

        int index = freeSpot;
        freeSpot = next[index];

        if (front[qn] == -1)
            front[qn] = index;
        else
            next[rear[qn]] = index;

        next[index] = -1;
        rear[qn] = index;
        arr[index] = data;
    }

    int dequeue(int qn) {
        if (front[qn] == -1) {
            cout << "Queue Underflow\n";
            return -1;
        }

        int index = front[qn];
        front[qn] = next[index];

        if (front[qn] == -1)
            rear[qn] = -1;

        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }
};

int main() {
    KQueues kq(3, 10);

    kq.enqueue(10, 0);
    kq.enqueue(20, 0);
    kq.enqueue(30, 1);
    kq.enqueue(40, 2);

    cout << "Dequeued from queue 0: " << kq.dequeue(0) << endl;
    cout << "Dequeued from queue 1: " << kq.dequeue(1) << endl;
    cout << "Dequeued from queue 2: " << kq.dequeue(2) << endl;

    return 0;
}
