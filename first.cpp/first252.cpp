// Push Front : -


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node *head;
    Node *tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val); // Dynamic allocation

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head; 
            head = newNode;
        }
    }

    void print() { 
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List l1; 
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    
    l1.print(); 

    return 0;
}


