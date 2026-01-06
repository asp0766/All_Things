// Minimum time taken to BURN the Binary Tree from a Node : - 


#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> parentMap;

    // Step 1: Map each node to its parent
    void markParents(TreeNode* root, TreeNode* parent) {
        if (!root) return;
        parentMap[root] = parent;
        markParents(root->left, root);
        markParents(root->right, root);
    }

    // Step 2: Find the time to burn the tree
    int minTimeToBurn(TreeNode* root, TreeNode* target) {
        markParents(root, NULL); // Store parent references

        queue<TreeNode*> q;
        unordered_map<TreeNode*, bool> visited;
        q.push(target);
        visited[target] = true;

        int time = 0;
        while (!q.empty()) {
            int size = q.size();
            bool burned = false;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left && !visited[node->left]) {
                    q.push(node->left);
                    visited[node->left] = true;
                    burned = true;
                }
                if (node->right && !visited[node->right]) {
                    q.push(node->right);
                    visited[node->right] = true;
                    burned = true;
                }
                if (parentMap[node] && !visited[parentMap[node]]) {
                    q.push(parentMap[node]);
                    visited[parentMap[node]] = true;
                    burned = true;
                }
            }
            if (burned) time++; // Increase time if any node is burned
        }

        return time;
    }
};

int main() {
    Solution sol;

    // Example Tree:
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6
    //       / \
    //      7   8
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(8);

    TreeNode* target = root->left->right; // Node with value 5

    cout << "Minimum time to burn the tree from " << target->val << " is: " 
         << sol.minTimeToBurn(root, target) << " seconds" << endl;

    return 0;
}
