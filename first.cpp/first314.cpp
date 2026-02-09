// Doubly Linked List : - 


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Traversing a Linked List
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Gives Length of LL
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

// Insert at Head
void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    if (head != NULL) {
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
}

// Insert at Tail
void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    if (tail != NULL) {
        tail->next = temp;
        temp->prev = tail;
    }
    tail = temp;
}

// Insert at Any Position
void insertAtPosition(Node*& head, Node*& tail, int position, int d) {
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// Delete a node at any position
void deleteNode(Node*& head, Node*& tail, int position) {
    // Empty list check
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    // Deleting first node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL; // If list becomes empty
        }
        delete temp;
        return;
    }

    // Traversing to the node to be deleted
    Node* temp = head;
    int cnt = 1;
    while (cnt < position && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) {
        cout << "Position out of bounds!" << endl;
        return;
    }

    // If deleting the last node
    if (temp->next == NULL) {
        tail = temp->prev;
        tail->next = NULL;
        delete temp;
        return;
    }

    // Deleting a middle node
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 11);
    insertAtHead(head, 12);
    insertAtHead(head, 14);
    insertAtHead(head, 134);
    insertAtTail(tail, 1335);

    print(head);

    insertAtPosition(head, tail, 3, 50); // Insert at position 3
    print(head);

    deleteNode(head, tail, 1); // Delete head
    print(head);

    deleteNode(head, tail, 4); // Delete middle node
    print(head);

    deleteNode(head, tail, getLength(head)); // Delete tail
    print(head);

    return 0;
}

