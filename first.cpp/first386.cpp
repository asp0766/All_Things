// Design Special Stack : - 



#include <iostream>
#include <stack>
using namespace std;

class SpecialStack {
    stack<int> s, minStack;

public:
    void push(int x) {
        s.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }

    void pop() {
        if (s.empty()) return;
        if (s.top() == minStack.top()) {
            minStack.pop();
        }
        s.pop();
    }

    int top() {
        return s.empty() ? -1 : s.top();
    }

    int getMin() {
        return minStack.empty() ? -1 : minStack.top();
    }
};

int main() {
    SpecialStack s;
    s.push(10);
    s.push(20);
    s.push(5);
    cout << "Min: " << s.getMin() << endl; // 5
    s.pop();
    cout << "Min: " << s.getMin() << endl; // 10
    return 0;
}
