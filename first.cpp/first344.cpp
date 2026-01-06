// Print Root to Node Path in Binary Tree :  -


#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool getPath(TreeNode* root, vector<int>& path, int target) {
        if (!root) return false;

        path.push_back(root->val); // Add current node to path

        if (root->val == target) return true; // Target node found

        // Search in left and right subtrees
        if (getPath(root->left, path, target) || getPath(root->right, path, target)) {
            return true;
        }

        path.pop_back(); // Backtrack if not found
        return false;
    }

    vector<int> rootToNodePath(TreeNode* root, int target) {
        vector<int> path;
        getPath(root, path, target);
        return path;
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
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    int target = 5;
    vector<int> path = sol.rootToNodePath(root, target);

    cout << "Path from Root to Node " << target << ": ";
    for (int val : path) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
