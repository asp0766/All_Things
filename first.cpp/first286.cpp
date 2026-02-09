// Queue Using Deque : - 


#include <iostream>
#include <deque>
using namespace std;

class Queue {
    deque<int> dq;
public:
    void push(int value) { dq.push_back(value); }
    void pop() { if (!dq.empty()) dq.pop_front(); }
    int front() { return dq.empty() ? -1 : dq.front(); }
    bool empty() { return dq.empty(); }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}