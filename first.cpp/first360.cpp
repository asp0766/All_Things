// Insert a given Node in Binary Search Tree : -


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
    TreeNode* insertBST(TreeNode* root, int val) {
        if (!root) return new TreeNode(val); // Create a new node if root is NULL
        
        if (val < root->val) 
            root->left = insertBST(root->left, val); // Insert in left subtree
        else 
            root->right = insertBST(root->right, val); // Insert in right subtree
        
        return root; // Return updated root
    }

    // Inorder traversal to print BST
    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
};

int main() {
    Solution sol;
    TreeNode* root = NULL;
    
    root = sol.insertBST(root, 8);
    sol.insertBST(root, 4);
    sol.insertBST(root, 12);
    sol.insertBST(root, 2);
    sol.insertBST(root, 6);
    sol.insertBST(root, 10);
    sol.insertBST(root, 14);

    cout << "Inorder Traversal of BST: ";
    sol.inorder(root);
    cout << endl;

    return 0;
}
