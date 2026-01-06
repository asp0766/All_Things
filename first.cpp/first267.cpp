// Stack Using LinkedList : - 



#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Node class for LinkedList
template<class T>
class Node {
public:
    T data;
    Node* next;

    Node(T val) {
        data = val;
        next = NULL;
    }
};

// Stack class using LinkedList
template<class T>
class Stack {
    Node<T>* head;

public:
    Stack() { head = NULL; } // Initialize head

    void push(T val) {
        Node<T>* newNode = new Node<T>(val);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!\n";
            return;
        }
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }

    T top() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty!");
        }
        return head->data;
    }

    bool isEmpty() {
        return head == NULL;
    }
};

int main() {
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty()) {
        cout << s.top() << " "; // Output: 1 2 3
        s.pop();
    }

    return 0;
}
