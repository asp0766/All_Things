// BST to Balanced BST : - 


#include <iostream>
#include <vector>
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

// Store inorder traversal of BST in a vector
void storeInorder(Node* root, vector<int>& inorder) {
    if (root == NULL) return;

    storeInorder(root->left, inorder);
    inorder.push_back(root->data);
    storeInorder(root->right, inorder);
}

// Convert sorted array to balanced BST
Node* sortedArrayToBST(vector<int>& inorder, int start, int end) {
    if (start > end) return NULL;

    int mid = (start + end) / 2;
    Node* root = new Node(inorder[mid]);

    root->left = sortedArrayToBST(inorder, start, mid - 1);
    root->right = sortedArrayToBST(inorder, mid + 1, end);

    return root;
}

// Convert unbalanced BST to balanced BST
Node* balanceBST(Node* root) {
    vector<int> inorder;
    storeInorder(root, inorder);
    return sortedArrayToBST(inorder, 0, inorder.size() - 1);
}

// Inorder traversal to verify BST
void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Insert function for unbalanced BST
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
    // Creating an unbalanced BST
    Node* root = NULL;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 1);
    insert(root, 7);
    insert(root, 40);
    insert(root, 50);

    cout << "Inorder of Unbalanced BST: ";
    inorder(root);
    cout << endl;

    // Convert to balanced BST
    root = balanceBST(root);

    cout << "Inorder of Balanced BST: ";
    inorder(root);
    cout << endl;

    return 0;
}
