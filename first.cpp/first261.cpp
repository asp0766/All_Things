// Removing Cycle in Linked List : -


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
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;  // Cycle detected
            }
        }
        return false;  // No cycle
    }

    void removeCycle() {
        if (head == NULL || head->next == NULL) return;  // Empty or single node list

        Node* slow = head;  // Tortoise
        Node* fast = head;  // Hare

        // Step 1: Detect the cycle
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Cycle detected
                break;
            }
        }

        if (slow != fast) return;  // No cycle, return

        // Step 2: Find the starting point of the cycle
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // Step 3: Find the node just before the start of the cycle
        Node* prev = NULL;
        while (fast->next != slow) {
            prev = fast;
            fast = fast->next;
        }

        // Step 4: Remove the cycle
        prev->next = NULL;  // Break the cycle
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

    l1.removeCycle();  // Remove the cycle

    cout << "Cycle Detected after removal: " << (l1.detectCycle() ? "Yes" : "No") << endl;  // Output: No

    return 0;
}


