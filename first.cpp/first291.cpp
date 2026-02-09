// Postorder Traversal : -


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

static int idx = -1;

Node* buildTree(vector<int> nodes) {
    idx++;
    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);  // Left subtree
    currNode->right = buildTree(nodes); // Right subtree

    return currNode;
}

// Postorder Traversal (LRN)
void postorder(Node* root) {
    if (root == NULL) {
        return;
    }

    // Left
    postorder(root->left);

    // Right
    postorder(root->right);

    // Root
    cout << root->data << " ";
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node* root = buildTree(nodes); // Build tree

    postorder(root); 
    cout << endl;

    return 0;
}
