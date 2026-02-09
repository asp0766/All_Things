// Pop Front in LinkedList : -


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
public:
    List() { head = NULL; }

    void push_front(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void pop_front() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~List() { while (head) pop_front(); } // Destructor to free memory
};

int main() {
    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    l1.print();  // Output: 1 -> 2 -> 3 -> NULL

    l1.pop_front();
    l1.print();  // Output: 2 -> 3 -> NULL

    l1.pop_front();
    l1.print();  // Output: 3 -> NULL

    l1.pop_front();
    l1.print();  // Output: NULL

    l1.pop_front(); // List is empty!

    return 0;
}
