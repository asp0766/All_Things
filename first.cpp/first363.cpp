// Check if a tree is a BST or BT : - 


#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBSTHelper(TreeNode* root, long minVal, long maxVal) {
        if (!root) return true;
        
        if (root->val <= minVal || root->val >= maxVal)
            return false;
        
        return isBSTHelper(root->left, minVal, root->val) &&
               isBSTHelper(root->right, root->val, maxVal);
    }

    bool isBST(TreeNode* root) {
        return isBSTHelper(root, LONG_MIN, LONG_MAX);
    }
};

int main() {
    Solution sol;
    
    // Example 1: BST
    TreeNode* root1 = new TreeNode(8);
    root1->left = new TreeNode(4);
    root1->right = new TreeNode(12);
    root1->left->left = new TreeNode(2);
    root1->left->right = new TreeNode(6);
    root1->right->left = new TreeNode(10);
    root1->right->right = new TreeNode(14);
    
    cout << "Is BST? " << (sol.isBST(root1) ? "Yes" : "No") << endl;

    // Example 2: Not a BST
    TreeNode* root2 = new TreeNode(10);
    root2->left = new TreeNode(5);
    root2->right = new TreeNode(15);
    root2->left->right = new TreeNode(12); // Violates BST property
    
    cout << "Is BST? " << (sol.isBST(root2) ? "Yes" : "No") << endl;

    return 0;
}
