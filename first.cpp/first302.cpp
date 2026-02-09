// Validate BST  : - 


#include <iostream>
#include <climits>
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

// Function to validate BST using range limits
bool isBST(Node* root, long long minVal, long long maxVal) {
    if (root == NULL) return true;

    if (root->data <= minVal || root->data >= maxVal) return false;

    return isBST(root->left, minVal, root->data) && 
           isBST(root->right, root->data, maxVal);
}

// Wrapper function
bool validateBST(Node* root) {
    return isBST(root, LLONG_MIN, LLONG_MAX);
}

// Insert function for BST
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

int main() {
    Node* root = NULL;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 2);
    insert(root, 7);
    insert(root, 12);
    insert(root, 20);

    if (validateBST(root))
        cout << "This is a valid BST" << endl;
    else
        cout << "This is NOT a valid BST" << endl;

    return 0;
}
