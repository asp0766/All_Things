// Deleting Linkedlist : -


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

    void deleteList() {
        Node* temp;
        while (head != NULL) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~List() { deleteList(); } // Destructor to free memory
};

int main() {
    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    l1.print(); 
    l1.deleteList();
    l1.print(); 

    return 0;
}
