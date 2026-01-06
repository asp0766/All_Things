// SubTree of another Tree : -


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

// Function to build the tree from a vector
Node* buildTree(vector<int> nodes) {
    idx++;
    if (idx >= nodes.size() || nodes[idx] == -1) { 
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

// Function to check if two trees are identical (used to check if one tree is a subtree)
bool areIdentical(Node* root1, Node* root2) {
    if (root1 == NULL && root2 == NULL) {
        return true;
    }

    if (root1 == NULL || root2 == NULL) {
        return false;
    }

    return (root1->data == root2->data) && 
           areIdentical(root1->left, root2->left) && 
           areIdentical(root1->right, root2->right);
}

// Function to check if a tree is a subtree of another tree
bool isSubTree(Node* root, Node* subRoot) {
    if (root == NULL) {
        return false;
    }

    // If the trees are identical, return true
    if (areIdentical(root, subRoot)) {
        return true;
    }

    // Recursively check the left and right subtrees
    return isSubTree(root->left, subRoot) || isSubTree(root->right, subRoot);
}

int main() {
    vector<int> mainTreeNodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    vector<int> subTreeNodes = {2, 4, -1, -1, 5, -1, -1}; // Subtree with root 2

    Node* mainRoot = buildTree(mainTreeNodes);
    Node* subRoot = buildTree(subTreeNodes);

    if (isSubTree(mainRoot, subRoot)) {
        cout << "The second tree is a subtree of the first tree." << endl;
    } else {
        cout << "The second tree is NOT a subtree of the first tree." << endl;
    }

    return 0;
}
