// Detect A Cycle in Linked List : -


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

    bool detectCycle() {
        if (head == NULL) return false;

        Node* slow = head;  // Tortoise
        Node* fast = head;  // Hare

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;          // Move slow by one step
            fast = fast->next->next;    // Move fast by two steps

            if (slow == fast) {
                return true;  // Cycle detected
            }
        }
        return false;  // No cycle
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

    // Creating a cycle for testing
    Node* temp = l1.head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = l1.head->next;  // Creating a cycle at node with value 2

    cout << "Cycle Detected: " << (l1.detectCycle() ? "Yes" : "No") << endl;  // Output: Yes

    return 0;
}
