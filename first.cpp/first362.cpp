// K-th Smallest/Largest Element in BST : -


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
    // K-th Smallest Element (Inorder Traversal)
    void inorder(TreeNode* root, int &k, int &result) {
        if (!root) return;
        
        inorder(root->left, k, result);
        
        k--;
        if (k == 0) {
            result = root->val;
            return;
        }
        
        inorder(root->right, k, result);
    }

    int kthSmallest(TreeNode* root, int k) {
        int result = -1;
        inorder(root, k, result);
        return result;
    }

    // K-th Largest Element (Reverse Inorder Traversal)
    void reverseInorder(TreeNode* root, int &k, int &result) {
        if (!root) return;
        
        reverseInorder(root->right, k, result);
        
        k--;
        if (k == 0) {
            result = root->val;
            return;
        }
        
        reverseInorder(root->left, k, result);
    }

    int kthLargest(TreeNode* root, int k) {
        int result = -1;
        reverseInorder(root, k, result);
        return result;
    }
};

int main() {
    Solution sol;
    
    // Sample BST
    TreeNode* root = new TreeNode(8);
    root->left = new TreeNode(4);
    root->right = new TreeNode(12);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(6);
    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(14);

    int k1 = 3, k2 = 2;
    
    cout << k1 << "-th Smallest: " << sol.kthSmallest(root, k1) << endl;
    cout << k2 << "-th Largest: " << sol.kthLargest(root, k2) << endl;

    return 0;
}
