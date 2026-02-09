// Iterative Inorder Traversal : - 


#include<iostream>
#include<vector>
#include<stack>  
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public: 
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr != NULL || !st.empty()) {
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top();
            st.pop();
            inorder.push_back(curr->val);
            curr = curr->right;
        }

        return inorder;
    }
};

int main() {
    Solution sol;

    // Example Tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result = sol.inorderTraversal(root);

    // Print output
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
