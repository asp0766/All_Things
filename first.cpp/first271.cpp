// Reverse A Stack : - 


#include <iostream>
#include <stack>
using namespace std;

// Insert element at the bottom of stack
void insertAtBottom(stack<int>& s, int val) {
    if (s.empty()) {
        s.push(val);
        return;
    }

    int top = s.top();
    s.pop();
    insertAtBottom(s, val);
    s.push(top);
}

// Reverse the stack using recursion
void reverseStack(stack<int>& s) {
    if (s.empty()) return;

    int top = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, top);
}

// Print stack
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Original Stack: ";
    printStack(s);

    reverseStack(s);

    cout << "Reversed Stack: ";
    printStack(s);

    return 0;
}
