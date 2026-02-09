// Top view of a Tree ( Horizontal Distance ) : -


#include <iostream>
#include <vector>
#include <queue>
#include <map>
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

// Function to print the top view of the tree
void topView(Node* root) {
    if (root == NULL) {
        return;
    }

    map<int, int> hdMap; // Map to store the first node at each horizontal distance
    queue<pair<Node*, int>> q; // Queue to perform level-order traversal

    q.push({root, 0}); // Push the root node with horizontal distance 0

    while (!q.empty()) {
        Node* node = q.front().first;
        int hd = q.front().second;
        q.pop();

        // If this horizontal distance is not yet in the map, add the node data
        if (hdMap.find(hd) == hdMap.end()) {
            hdMap[hd] = node->data;
        }

        // Push left and right children with updated horizontal distances
        if (node->left) {
            q.push({node->left, hd - 1});
        }
        if (node->right) {
            q.push({node->right, hd + 1});
        }
    }

    // Print the top view
    for (auto it = hdMap.begin(); it != hdMap.end(); ++it) {
        cout << it->second << " ";
    }
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node* root = buildTree(nodes);

    cout << "Top view of the tree: ";
    topView(root);

    return 0;
}
