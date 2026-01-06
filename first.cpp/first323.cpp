// Clone a LL with Random Pointers : -


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* random;

    Node(int val) {
        data = val;
        next = NULL;
        random = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() { head = NULL; }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    Node* cloneList() {
        if (!head) return NULL;

        // Step 1: Insert cloned nodes next to original nodes
        Node* temp = head;
        while (temp) {
            Node* copy = new Node(temp->data);
            copy->next = temp->next;
            temp->next = copy;
            temp = copy->next;
        }

        // Step 2: Copy random pointers
        temp = head;
        while (temp) {
            if (temp->random) temp->next->random = temp->random->next;
            temp = temp->next->next;
        }

        // Step 3: Separate the original and cloned lists
        Node* original = head, *clone = head->next, *cloneHead = head->next;
        while (original) {
            original->next = original->next->next;
            if (clone->next) clone->next = clone->next->next;
            original = original->next;
            clone = clone->next;
        }

        return cloneHead;
    }

    void printList(Node* node) {
        while (node) {
            cout << "Data: " << node->data;
            if (node->random) cout << ", Random: " << node->random->data;
            cout << endl;
            node = node->next;
        }
    }
};

int main() {
    LinkedList ll;
    
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    
    ll.head->random = ll.head->next->next;  // 1->random = 3
    ll.head->next->random = ll.head;        // 2->random = 1
    ll.head->next->next->random = ll.head->next;  // 3->random = 2

    Node* clonedHead = ll.cloneList();
    ll.printList(clonedHead);  // Cloned list with random pointers

    return 0;
}
