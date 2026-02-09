// Diameter of A Tree : - 


#include <iostream>
#include <vector>
#include <algorithm>
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
    if (idx >= nodes.size() || nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

// Function to calculate the height of the tree and update the diameter
int heightAndDiameter(Node* root, int &diameter) {
    if (root == NULL) {
        return 0;
    }

    // Calculate left and right subtree heights
    int leftHeight = heightAndDiameter(root->left, diameter);
    int rightHeight = heightAndDiameter(root->right, diameter);

    // Update the diameter at this node
    diameter = max(diameter, leftHeight + rightHeight);

    // Return the height of the current subtree
    return max(leftHeight, rightHeight) + 1;
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node* root = buildTree(nodes);

    int diameter = 0;  // To store the maximum diameter
    heightAndDiameter(root, diameter);

    cout << "Diameter of the Tree: " << diameter << endl;

    return 0;
}

