// Merge Sort in LL : -


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

    Node* findMiddle(Node* head) {
        Node* slow = head, *fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* merge(Node* left, Node* right) {
        if (!left) return right;
        if (!right) return left;

        if (left->data < right->data) {
            left->next = merge(left->next, right);
            return left;
        } else {
            right->next = merge(left, right->next);
            return right;
        }
    }

    Node* mergeSort(Node* head) {
        if (!head || !head->next) return head;

        Node* mid = findMiddle(head);
        Node* rightHead = mid->next;
        mid->next = NULL;

        Node* leftSorted = mergeSort(head);
        Node* rightSorted = mergeSort(rightHead);

        return merge(leftSorted, rightSorted);
    }

    void sort() {
        head = mergeSort(head);
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
    LinkedList ll;
    ll.insert(4);
    ll.insert(2);
    ll.insert(1);
    ll.insert(3);

    cout << "Before Sorting: ";
    ll.printList();

    ll.sort();

    cout << "After Sorting: ";
    ll.printList();

    return 0;
}
