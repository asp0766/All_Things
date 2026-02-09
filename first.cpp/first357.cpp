// Search in a Binary Search Tree : - 


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
    TreeNode* searchBST(TreeNode* root, int target) {
        if (!root || root->val == target) return root;
        return (target < root->val) ? searchBST(root->left, target) : searchBST(root->right, target);
    }
};

// Helper function to create a BST
TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

int main() {
    TreeNode* root = NULL;
    root = insert(root, 4);
    insert(root, 2);
    insert(root, 7);
    insert(root, 1);
    insert(root, 3);

    Solution sol;
    int target = 2;
    TreeNode* result = sol.searchBST(root, target);

    if (result) cout << "Found: " << result->val << endl;
    else cout << "Not Found" << endl;

    return 0;
}
