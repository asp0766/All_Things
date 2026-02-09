// Circular Linked List : - 


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->next = this; // Point to itself for circular nature
    }
};

// Traversing a Circular Linked List
void print(Node* tail) {
    if (tail == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = tail;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

// Insert at Head
void insertAtHead(Node*& tail, int d) {
    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        return;
    }

    Node* newNode = new Node(d);
    newNode->next = tail->next;
    tail->next = newNode;
}

// Insert at Tail
void insertAtTail(Node*& tail, int d) {
    if (tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        return;
    }

    Node* newNode = new Node(d);
    newNode->next = tail->next;
    tail->next = newNode;
    tail = newNode;
}

// Insert at Any Position
void insertAtPosition(Node*& tail, int position, int d) {
    if (position == 1) {
        insertAtHead(tail, d);
        return;
    }

    Node* temp = tail->next;
    int cnt = 1;

    while (cnt < position - 1 && temp != tail) {
        temp = temp->next;
        cnt++;
    }

    Node* newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;

    if (temp == tail) {
        tail = newNode;
    }
}

// Delete a Node
void deleteNode(Node*& tail, int position) {
    if (tail == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = tail->next;

    // Deleting the first node
    if (position == 1) {
        if (tail->next == tail) { // Single node case
            delete tail;
            tail = NULL;
        } else {
            tail->next = temp->next;
            delete temp;
        }
        return;
    }

    // Deleting any other position
    Node* prev = NULL;
    int cnt = 1;

    while (cnt < position && temp != tail) {
        prev = temp;
        temp = temp->next;
        cnt++;
    }

    if (temp == tail) { // If deleting tail
        prev->next = temp->next;
        tail = prev;
        delete temp;
        return;
    }

    prev->next = temp->next;
    delete temp;
}

int main() {
    Node* tail = NULL;

    insertAtTail(tail, 10);
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    print(tail);

    insertAtHead(tail, 5);
    print(tail);

    insertAtPosition(tail, 2, 15);
    print(tail);

    deleteNode(tail, 1); // Delete head
    print(tail);

    deleteNode(tail, 3); // Delete middle
    print(tail);

    deleteNode(tail, 3); // Delete tail
    print(tail);

    return 0;
}
