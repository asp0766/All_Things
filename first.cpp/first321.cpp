// Check Palindrome in LL : - 


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

    bool isPalindrome() {
        if (!head || !head->next) return true;

        // Find middle
        Node* slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        Node* revHead = reverse(slow);
        Node* temp = revHead, *curr = head;

        // Compare halves
        while (temp) {
            if (curr->data != temp->data) return false;
            curr = curr->next;
            temp = temp->next;
        }

        return true;
    }
};

int main() {
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(2);
    ll.insert(1);

    cout << (ll.isPalindrome() ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}
