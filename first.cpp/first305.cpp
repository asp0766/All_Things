// Largest BST in BT : - 


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

// Structure to store information about a subtree
class Info {
public:
    int size;      // Size of the BST
    int minVal;    // Min value in subtree
    int maxVal;    // Max value in subtree
    bool isBST;    // Is the subtree a BST?

    Info(int size, int minVal, int maxVal, bool isBST) {
        this->size = size;
        this->minVal = minVal;
        this->maxVal = maxVal;
        this->isBST = isBST;
    }
};

// Function to find the largest BST in a BT
Info largestBSTHelper(Node* root, int& maxSize) {
    if (root == NULL) return Info(0, INT_MAX, INT_MIN, true);

    // Recursively check left and right subtrees
    Info leftInfo = largestBSTHelper(root->left, maxSize);
    Info rightInfo = largestBSTHelper(root->right, maxSize);

    // Check if current subtree is a BST
    if (leftInfo.isBST && rightInfo.isBST && 
        root->data > leftInfo.maxVal && root->data < rightInfo.minVal) {

        int currentSize = leftInfo.size + rightInfo.size + 1;
        maxSize = max(maxSize, currentSize);

        return Info(currentSize, min(root->data, leftInfo.minVal),
                    max(root->data, rightInfo.maxVal), true);
    }

    // If not a BST, return invalid info
    return Info(0, 0, 0, false);
}

// Wrapper function
int largestBST(Node* root) {
    int maxSize = 0;
    largestBSTHelper(root, maxSize);
    return maxSize;
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(7); // This node breaks the BST rule

    cout << "Size of Largest BST in BT: " << largestBST(root) << endl;

    return 0;
}
