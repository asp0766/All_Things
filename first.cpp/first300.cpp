// Search in a BST : - 


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

// Search function
bool search(Node* root, int key) {
    if (root == NULL) return false;
    if (root->data == key) return true;

    return key < root->data ? search(root->left, key) : search(root->right, key);
}

int main() {
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node* root = NULL;

    for (int i = 0; i < 6; i++) {
        root = insert(root, arr[i]);
    }

    int key = 4;
    if (search(root, key))
        cout << key << " found in BST" << endl;
    else
        cout << key << " not found in BST" << endl;

    return 0;
}



