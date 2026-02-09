// Reverse First K Elements Of Queue : - 


#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseFirstK(queue<int> &q, int k) {
    if (q.empty() || k <= 0 || k > q.size()) return;

    stack<int> s;

    // Step 1: Push first K elements into the stack
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Enqueue back the elements from stack
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Move remaining elements to the back
    int n = q.size();
    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
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
    q.push(50);

    int k = 3;

    cout << "Original Queue: ";
    printQueue(q);

    reverseFirstK(q, k);

    cout << "Modified Queue: ";
    printQueue(q);

    return 0;
}
