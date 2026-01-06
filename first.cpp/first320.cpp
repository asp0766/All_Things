// Merge 2 Sorted LL : -


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

    static Node* mergeSortedLists(Node* l1, Node* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        if (l1->data < l2->data) {
            l1->next = mergeSortedLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeSortedLists(l1, l2->next);
            return l2;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList l1, l2;

    l1.insert(1);
    l1.insert(3);
    l1.insert(5);

    l2.insert(2);
    l2.insert(4);
    l2.insert(6);

    l1.head = LinkedList::mergeSortedLists(l1.head, l2.head);
    l1.printList(); // Output: 1 2 3 4 5 6

    return 0;
}

