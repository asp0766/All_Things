// Push At Bottom Of Stack : -


#include <iostream>
using namespace std;

template <class T>
class Stack {
    struct StackNode {
        T data;
        StackNode* next;
    };

    StackNode* head;

public:
    Stack() { head = NULL; }

    void push(T val) {
        StackNode* newNode = new StackNode{val, head};
        head = newNode;
    }

    void pop() {
        if (isEmpty()) return;
        StackNode* temp = head;
        head = head->next;
        delete temp;
    }

    T top() {
        return head ? head->data : -1; // Return -1 if stack is empty
    }

    bool isEmpty() {
        return head == NULL;
    }

    void pushAtBottom(T val) {
        if (isEmpty()) {
            push(val);
            return;
        }

        StackNode* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = new StackNode{val, NULL};
    }

    void printStack() {
        for (StackNode* temp = head; temp; temp = temp->next)
            cout << temp->data << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    cout << "Before pushAtBottom: ";
    s.printStack(); // Output: 1 2 3

    s.pushAtBottom(0);

    cout << "After pushAtBottom: ";
    s.printStack(); // Output: 1 2 3 0

    return 0;
}


