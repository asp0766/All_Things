//  Linked List - by Love Babbar ( 10 Videos )
// https://youtube.com/playlist?list=PLDzeHZWIZsTr54_TH_NK4ibFojS4mmQA6&si=qkBGJ_NIk-k_Vx9U


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this-> data ;
        // Memory Free
        if(this-> next  != NULL){
            delete next ;
            this -> next = NULL ;
        }

        cout<<"Memory is free for node with data "<< value << endl;
    }
};

// Insert at Head
void InsertAtHead(Node*& head, int d) {
    // new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insert at Tail
void InsertAtTail(Node*& tail, int d) {
    // new node create
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Insert at Position
void InsertAtPosition(Node*& tail, Node*& head, int position, int d) {

    // Insert at Start
    if (position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // If position is out of bounds
    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    // Inserting At Last Position
    if (temp->next == NULL) {
        InsertAtTail(tail, d);
        return;
    }

    // Creating a node for data
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Print Linked List
void print(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode( int position , Node* &head){
  
    // deleting first or start node
    if(position == 1 ){
        Node* temp = head ;
        head = head -> next ;
        // Memory free start Node
        temp->next = NULL;
        delete temp ;
    }

    else{
    // deleting any middle node or last node

    Node* curr = head ;
    Node* prev = NULL ;

    int cnt = 1 ;
    while ( cnt < position ){
        prev = curr ;
        curr = curr -> next ;
        cnt++ ;
    }

    prev->next = curr->next;
    curr -> next  = NULL;
    delete curr;

    }
}

int main() {
    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node
    Node* head = node1;
    Node* tail = node1; // Initialize tail
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(tail, head, 2, 22);  // Insert at middle in LL 
    print(head);

    cout << "Head : " << head -> data << endl;
    cout << "Tail : " << tail -> data << endl;

    deleteNode(4 ,head);
    print(head);
    return 0;
}

