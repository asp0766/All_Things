// Queue Reversal : -


#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q) {
    stack<int> s;

    // Step 1: Push all elements of queue into stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Push all elements back from stack to queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Original Queue: ";
    printQueue(q);

    reverseQueue(q);

    cout << "Reversed Queue: ";
    printQueue(q);

    return 0;
}
