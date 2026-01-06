// Zig Zag Linked List : -


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

    // Function to rearrange the list in zig-zag order
    void zigZag() {
        if (!head) return;  // Empty list check

        bool flag = true;  // true means '<', false means '>'
        
        Node* temp = head;
        
        // Traverse the list
        while (temp && temp->next) {
            if (flag) {
                // '<' case: ensure current node is smaller than next
                if (temp->data > temp->next->data) {
                    swap(temp->data, temp->next->data);  // Swap values
                }
            } else {
                // '>' case: ensure current node is greater than next
                if (temp->data < temp->next->data) {
                    swap(temp->data, temp->next->data);  // Swap values
                }
            }

            // Move to the next node
            temp = temp->next;
            flag = !flag;  // Toggle the flag for zig-zag pattern
        }
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
    l1.push_front(30);
    l1.push_front(15);

    cout << "Original List:" << endl;
    l1.print();  // Output: 15 -> 30 -> 5 -> 20 -> 10 -> NULL

    l1.zigZag();  // Rearrange the list in Zig-Zag order

    cout << "Zig-Zag List:" << endl;
    l1.print();  // Output: 5 -> 30 -> 5 -> 10 -> 20 -> NULL

    return 0;
}
