// LCA in Binary Search Tree : -


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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while (root) {
            if (p->val < root->val && q->val < root->val) {
                root = root->left;  // Move left
            } 
            else if (p->val > root->val && q->val > root->val) {
                root = root->right; // Move right
            } 
            else {
                return root; // Found LCA
            }
        }
        return NULL;
    }
};

int main() {
    Solution sol;
    
    // Example BST:
    //        6
    //       / \
    //      2   8
    //     / \  / \
    //    0  4 7  9
    //      / \
    //     3   5
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    TreeNode* p = root->left;    // Node 2
    TreeNode* q = root->left->right; // Node 4

    TreeNode* lca = sol.lowestCommonAncestor(root, p, q);
    cout << "LCA of " << p->val << " and " << q->val << " is: " << lca->val << endl;

    return 0;
}
