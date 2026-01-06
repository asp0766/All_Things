// Delete a Node in Binary Search Tree : -


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
    // Helper function to find the minimum value node in right subtree
    TreeNode* findMin(TreeNode* root) {
        while (root->left) root = root->left;
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return root; // If tree is empty

        // Search for the node to delete
        if (key < root->val) 
            root->left = deleteNode(root->left, key);
        else if (key > root->val) 
            root->right = deleteNode(root->right, key);
        else {
            // Case 1: No child
            if (!root->left && !root->right) {
                delete root;
                return NULL;
            }
            // Case 2: One child
            else if (!root->left) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else if (!root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            // Case 3: Two children
            TreeNode* temp = findMin(root->right); // Find inorder successor
            root->val = temp->val; // Copy successor value
            root->right = deleteNode(root->right, temp->val); // Delete successor
        }
        return root;
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
    TreeNode* root = new TreeNode(8);
    root->left = new TreeNode(4);
    root->right = new TreeNode(12);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(6);
    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(14);

    cout << "Original BST (Inorder): ";
    sol.inorder(root);
    cout << endl;

    root = sol.deleteNode(root, 4); // Delete node 4

    cout << "BST after deleting 4 (Inorder): ";
    sol.inorder(root);
    cout << endl;

    return 0;
}
