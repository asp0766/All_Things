// Inorder Successor :  - 


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Insert function
Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Find minimum value node in a BST (used for right subtree case)
Node* minValue(Node* node) {
    while (node->left != NULL) {
        node = node->left;
    }
    return node;
}

// Function to find inorder successor
Node* inorderSuccessor(Node* root, Node* target) {
    Node* successor = NULL;

    while (root != NULL) {
        if (target->data < root->data) {
            successor = root; // Potential successor
            root = root->left;
        } else {
            root = root->right;
        }
    }

    return successor;
}

int main() {
    Node* root = NULL;
    root = insert(root, 20);
    insert(root, 8);
    insert(root, 22);
    insert(root, 4);
    insert(root, 12);
    insert(root, 10);
    insert(root, 14);

    Node* target = root->left->right->right; // Node 14
    Node* succ = inorderSuccessor(root, target);

    if (succ)
        cout << "Inorder Successor of " << target->data << " is " << succ->data << endl;
    else
        cout << "No Inorder Successor for " << target->data << endl;

    return 0;
}
