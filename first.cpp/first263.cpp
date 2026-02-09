// Merge Sort On A Linked List : -


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

    // Merge two sorted linked lists
    Node* merge(Node* left, Node* right) {
        if (left == NULL) return right;
        if (right == NULL) return left;

        if (left->data < right->data) {
            left->next = merge(left->next, right);
            return left;
        } else {
            right->next = merge(left, right->next);
            return right;
        }
    }

    // Split the linked list into two halves
    Node* getMiddle(Node* head) {
        if (head == NULL) return NULL;

        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // Merge Sort on the linked list
    Node* mergeSort(Node* head) {
        if (head == NULL || head->next == NULL) return head;  // Base case for recursion

        Node* middle = getMiddle(head);
        Node* nextToMiddle = middle->next;

        middle->next = NULL;  // Split the list into two halves

        Node* left = mergeSort(head);  // Sort the left half
        Node* right = mergeSort(nextToMiddle);  // Sort the right half

        return merge(left, right);  // Merge the two sorted halves
    }

    // Function to sort the linked list
    void sortList() {
        head = mergeSort(head);
    }

    // Print the list
    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List l1;
    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(5);
    l1.push_front(3);
    l1.push_front(8);

    cout << "Original List:" << endl;
    l1.print();  // Output: 8 -> 3 -> 5 -> 20 -> 10 -> NULL

    l1.sortList();

    cout << "Sorted List:" << endl;
    l1.print();  // Output: 3 -> 5 -> 8 -> 10 -> 20 -> NULL

    return 0;
}
