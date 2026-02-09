// Balanced Binary Tree : -
#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int checkHeight(TreeNode* root) {
        if (root == NULL) return 0;

        int lh = checkHeight(root->left);
        if (lh == -1) return -1;  // If left subtree is unbalanced, return -1

        int rh = checkHeight(root->right);
        if (rh == -1) return -1;  // If right subtree is unbalanced, return -1

        if (abs(lh - rh) > 1) return -1;  // If difference > 1, it's unbalanced

        return 1 + max(lh, rh);  // Return height of subtree
    }

    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};

int main() {
    Solution sol;

    // Example Balanced Tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << (sol.isBalanced(root) ? "Balanced" : "Not Balanced") << endl;

    return 0;
}
