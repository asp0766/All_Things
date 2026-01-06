// Stack Using Deque : -


#include <iostream>
#include <deque>
using namespace std;

class Stack {
    deque<int> dq;
public:
    void push(int value) { dq.push_back(value); }
    void pop() { if (!dq.empty()) dq.pop_back(); }
    int top() { return dq.empty() ? -1 : dq.back(); }
    bool empty() { return dq.empty(); }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}