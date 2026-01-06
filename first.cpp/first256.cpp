// Iterative Search in LinkedList : - 


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

    bool search(int key) {
        Node* temp = head;
        while (temp) {
            if (temp->data == key)
                return true;
            temp = temp->next;
        }
        return false;
    }

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
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    l1.print();  // Output: 1 -> 2 -> 3 -> NULL

    cout << "Search 2: " << (l1.search(2) ? "Found" : "Not Found") << endl;  // Found
    cout << "Search 5: " << (l1.search(5) ? "Found" : "Not Found") << endl;  // Not Found

    return 0;
}
