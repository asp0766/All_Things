// Reverse in k Group : -


#include<iostream>
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

Node* kReverse(Node* head, int k) {
    // Base Case
    if (head == NULL) {
        return NULL;
    }

    // Step 1: Reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr; 
        curr = next;
        count++;
    }

    // Step 2: Recursively reverse the remaining list
    if (next != NULL) {
        head->next = kReverse(next, k);
    }

    // Step 3: Return the new head
    return prev;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}


int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);

    int k = 2;   // reverse in 2-K Groups Means Reverse in 2 pairs of A List

    cout << "Original List: ";
    printList(head);

    head = kReverse(head, k);

    cout << "K-Reversed List: ";
    printList(head);

    return 0;
}
