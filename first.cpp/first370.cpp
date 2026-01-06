// Largest BST in Binary Tree : -


#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Struct to store information of subtrees
struct Info {
    int size;     // Size of the BST
    int minVal;   // Minimum value in subtree
    int maxVal;   // Maximum value in subtree
    bool isBST;   // Is this subtree a BST?
};

class Solution {
public:
    int maxSize = 0; // To store the size of the largest BST

    // Postorder Traversal
    Info largestBSTHelper(TreeNode* root) {
        if (!root) return {0, INT_MAX, INT_MIN, true};

        auto left = largestBSTHelper(root->left);
        auto right = largestBSTHelper(root->right);

        Info curr;
        curr.size = left.size + right.size + 1;
        curr.minVal = min(root->val, left.minVal);
        curr.maxVal = max(root->val, right.maxVal);

        // Check if this is a BST
        if (left.isBST && right.isBST && root->val > left.maxVal && root->val < right.minVal) {
            curr.isBST = true;
            maxSize = max(maxSize, curr.size);
        } else {
            curr.isBST = false;
        }

        return curr;
    }

    int largestBST(TreeNode* root) {
        largestBSTHelper(root);
        return maxSize;
    }
};

// Driver Code
int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(8);
    root->right->right = new TreeNode(7); // Violates BST property

    Solution sol;
    cout << "Size of Largest BST: " << sol.largestBST(root) << endl;

    return 0;
}
