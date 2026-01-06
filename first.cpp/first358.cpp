// Ceil in a Binary Search Tree : -


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
    int findCeil(TreeNode* root, int X) {
        int ceil = -1; // Default value if no ceil exists
        while (root) {
            if (root->val == X) return root->val; // Exact match
            if (root->val > X) {
                ceil = root->val; // Possible ceil
                root = root->left; // Move left
            } else {
                root = root->right; // Move right
            }
        }
        return ceil;
    }
};

// Helper function to insert into BST
TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

int main() {
    TreeNode* root = NULL;
    root = insert(root, 8);
    insert(root, 4);
    insert(root, 12);
    insert(root, 2);
    insert(root, 6);
    insert(root, 10);
    insert(root, 14);

    Solution sol;
    int X = 5;
    int ceilValue = sol.findCeil(root, X);
    
    if (ceilValue != -1) cout << "Ceil of " << X << " is: " << ceilValue << endl;
    else cout << "No Ceil Found" << endl;

    return 0;
}
