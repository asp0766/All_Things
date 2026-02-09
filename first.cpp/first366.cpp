// Inorder Successor/Predecessor in BST : -


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
    TreeNode* inorderPredecessor(TreeNode* root, TreeNode* node) {
        TreeNode* pred = NULL;
        
        if (node->left) {  // Case 1: Left subtree exists
            pred = node->left;
            while (pred->right) pred = pred->right;
            return pred;
        }

        // Case 2: No left subtree, find from root
        while (root) {
            if (node->val > root->val) {
                pred = root;  // Possible predecessor
                root = root->right;
            } else {
                root = root->left;
            }
        }

        return pred;
    }

    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* node) {
        TreeNode* succ = NULL;

        if (node->right) {  // Case 1: Right subtree exists
            succ = node->right;
            while (succ->left) succ = succ->left;
            return succ;
        }

        // Case 2: No right subtree, find from root
        while (root) {
            if (node->val < root->val) {
                succ = root;  // Possible successor
                root = root->left;
            } else {
                root = root->right;
            }
        }

        return succ;
    }
};

int main() {
    Solution sol;
    
    // Constructing BST:
    TreeNode* root = new TreeNode(20);
    root->left = new TreeNode(10);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(15);
    root->right->left = new TreeNode(25);
    root->right->right = new TreeNode(35);

    TreeNode* node = root->left; // Node with value 10

    TreeNode* pred = sol.inorderPredecessor(root, node);
    TreeNode* succ = sol.inorderSuccessor(root, node);

    cout << "Inorder Predecessor of " << node->val << ": " << (pred ? to_string(pred->val) : "None") << endl;
    cout << "Inorder Successor of " << node->val << ": " << (succ ? to_string(succ->val) : "None") << endl;

    return 0;
}
