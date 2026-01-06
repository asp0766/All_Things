// Merge 2 BSTs : -


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

// Merge two sorted arrays
vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    vector<int> merged;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i++]);
        } else {
            merged.push_back(arr2[j++]);
        }
    }

    // Add remaining elements
    while (i < arr1.size()) merged.push_back(arr1[i++]);
    while (j < arr2.size()) merged.push_back(arr2[j++]);

    return merged;
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

// Merge two BSTs
Node* mergeBSTs(Node* root1, Node* root2) {
    vector<int> inorder1, inorder2;
    
    storeInorder(root1, inorder1);
    storeInorder(root2, inorder2);

    vector<int> mergedInorder = mergeSortedArrays(inorder1, inorder2);

    return sortedArrayToBST(mergedInorder, 0, mergedInorder.size() - 1);
}

// Inorder traversal to verify merged BST
void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Insert function for BST
Node* insert(Node* root, int val) {
    if (root == NULL) return new Node(val);

    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);

    return root;
}

int main() {
    // Creating first BST
    Node* root1 = NULL;
    root1 = insert(root1, 3);
    insert(root1, 1);
    insert(root1, 5);

    // Creating second BST
    Node* root2 = NULL;
    root2 = insert(root2, 4);
    insert(root2, 2);
    insert(root2, 6);

    cout << "Inorder of BST 1: ";
    inorder(root1);
    cout << endl;

    cout << "Inorder of BST 2: ";
    inorder(root2);
    cout << endl;

    // Merge the two BSTs
    Node* mergedRoot = mergeBSTs(root1, root2);

    cout << "Inorder of Merged BST: ";
    inorder(mergedRoot);
    cout << endl;

    return 0;
}
