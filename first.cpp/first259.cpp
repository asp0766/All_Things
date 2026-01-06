// Find & Remove Nth Node form End : -


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

    void removeNthFromEnd(int n) {
        Node* first = head;
        Node* second = head;
        
        // Move first pointer n steps ahead
        for (int i = 0; i < n; i++) {
            if (first == NULL) return;  // If N is greater than the length of the list
            first = first->next;
        }

        // Move both pointers one step at a time
        if (first == NULL) {
            head = head->next; // If we need to remove the first node
            return;
        }

        while (first->next != NULL) {
            first = first->next;
            second = second->next;
        }

        // Remove the Nth node from the end
        Node* temp = second->next;
        second->next = second->next->next;
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

    ~List() { while (head) pop_back(); } // Destructor to free memory
};

int main() {
    List l1;
    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    l1.print();  // Output: 1 -> 2 -> 3 -> 4 -> 5 -> NULL

    l1.removeNthFromEnd(2);
    l1.print();  // Output: 1 -> 2 -> 3 -> 5 -> NULL (removed 4th node)

    return 0;
}
