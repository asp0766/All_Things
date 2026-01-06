// Diameter of BT : -
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
    int diameterHelper(TreeNode* root, int &diameter) {
        if (root == NULL) return 0;

        int lh = diameterHelper(root->left, diameter);
        int rh = diameterHelper(root->right, diameter);

        diameter = max(diameter, lh + rh);  // Update max diameter

        return 1 + max(lh, rh);  // Return height of subtree
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        diameterHelper(root, diameter);
        return diameter;
    }
};

int main() {
    Solution sol;

    // Example Tree:
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

    cout << "Diameter: " << sol.diameterOfBinaryTree(root) << endl;

    return 0;
}
