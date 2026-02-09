// BST To Max Heap : - 


#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Inorder traversal to store elements in sorted order
void inorder(Node* root, vector<int> &arr) {
    if (root == NULL)
        return;

    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

// Postorder traversal to modify the tree into max heap
void bstToMaxHeap(Node* root, vector<int> &arr, int &i) {
    if (root == NULL)
        return;

    bstToMaxHeap(root->left, arr, i);
    bstToMaxHeap(root->right, arr, i);

    root->data = arr[i++];
}

// Convert BST to Max Heap
void convertToMaxHeap(Node* root) {
    vector<int> arr;
    inorder(root, arr);  // Get sorted elements
    int i = 0;
    bstToMaxHeap(root, arr, i);
}

// Print postorder to verify max heap
void postorder(Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    convertToMaxHeap(root);

    cout << "Postorder of Max Heap: ";
    postorder(root);

    return 0;
}
