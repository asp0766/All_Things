// Children Sum Property in Binary Tree :  -


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
    // Function to check if the tree satisfies the children sum property
    bool checkChildrenSum(TreeNode* root) {
        if (!root || (!root->left && !root->right)) return true; // Leaf node or empty tree

        int leftVal = root->left ? root->left->val : 0;
        int rightVal = root->right ? root->right->val : 0;

        return (root->val == leftVal + rightVal) &&
               checkChildrenSum(root->left) &&
               checkChildrenSum(root->right);
    }

    // Function to modify the tree to satisfy the children sum property
    void changeTree(TreeNode* root) {
        if (!root) return;

        int childSum = 0;
        if (root->left) childSum += root->left->val;
        if (root->right) childSum += root->right->val;

        if (childSum >= root->val) root->val = childSum;
        else {
            if (root->left) root->left->val = root->val;
            if (root->right) root->right->val = root->val;
        }

        changeTree(root->left);
        changeTree(root->right);

        int total = 0;
        if (root->left) total += root->left->val;
        if (root->right) total += root->right->val;
        if (root->left || root->right) root->val = total;
    }
};

int main() {
    Solution sol;

    // Example Tree:
    //        50
    //       /  \
    //      7    2
    //     / \  / \
    //    3  5 1  30
    TreeNode* root = new TreeNode(50);
    root->left = new TreeNode(7);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(30);

    cout << "Before modification: " << (sol.checkChildrenSum(root) ? "Satisfies" : "Doesn't Satisfy") << endl;
    
    sol.changeTree(root);

    cout << "After modification: " << (sol.checkChildrenSum(root) ? "Satisfies" : "Doesn't Satisfy") << endl;

    return 0;
}
