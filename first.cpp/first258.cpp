// Reverse A LinkedList : -


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

    void reverse() {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;
        
        while (current != NULL) {
            next = current->next;   // Save next node
            current->next = prev;   // Reverse the current node's pointer
            prev = current;         // Move prev and current one step forward
            current = next;
        }
        head = prev;  // Update head to point to the new first node
    }

    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~List() { while (head) pop_back(); } // Destructor to free memory
};

int main() {
    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    l1.print();  // Output: 1 -> 2 -> 3 -> NULL

    l1.reverse();
    l1.print();  // Output: 3 -> 2 -> 1 -> NULL

    return 0;
}
