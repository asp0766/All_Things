// Boundary Traversal in BT :  -


#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void addLeftBoundary(TreeNode* root, vector<int>& res) {
        TreeNode* cur = root->left;
        while (cur) {
            if (cur->left || cur->right) res.push_back(cur->val);
            cur = (cur->left) ? cur->left : cur->right;
        }
    }

    void addLeafNodes(TreeNode* root, vector<int>& res) {
        if (!root) return;
        if (!root->left && !root->right) {
            res.push_back(root->val);
            return;
        }
        addLeafNodes(root->left, res);
        addLeafNodes(root->right, res);
    }

    void addRightBoundary(TreeNode* root, vector<int>& res) {
        TreeNode* cur = root->right;
        vector<int> temp;
        while (cur) {
            if (cur->left || cur->right) temp.push_back(cur->val);
            cur = (cur->right) ? cur->right : cur->left;
        }
        for (int i = temp.size() - 1; i >= 0; i--) {
            res.push_back(temp[i]); // Reverse order
        }
    }

    vector<int> boundaryTraversal(TreeNode* root) {
        vector<int> res;
        if (!root) return res;

        res.push_back(root->val);  // Root node
        addLeftBoundary(root, res);
        addLeafNodes(root, res);
        addRightBoundary(root, res);

        return res;
    }
};

int main() {
    Solution sol;

    // Example Tree:
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    vector<int> result = sol.boundaryTraversal(root);

    
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
