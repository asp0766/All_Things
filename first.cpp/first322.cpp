// Add 2 Numbers Represented By LL : - 


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

    Node* reverse(Node* head) {
        Node* prev = NULL, *next = NULL;
        while (head) {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    static Node* addTwoLists(Node* l1, Node* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        Node* dummy = new Node(0);
        Node* temp = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) { sum += l1->data; l1 = l1->next; }
            if (l2) { sum += l2->data; l2 = l2->next; }

            carry = sum / 10;
            temp->next = new Node(sum % 10);
            temp = temp->next;
        }

        return reverse(dummy->next);
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
    LinkedList l1, l2, result;

    l1.insert(2);
    l1.insert(4);
    l1.insert(3);  // Represents 243

    l2.insert(5);
    l2.insert(6);
    l2.insert(4);  // Represents 564

    result.head = LinkedList::addTwoLists(l1.head, l2.head);
    result.printList();  // Output: 8 0 7 (807)

    return 0;
}
