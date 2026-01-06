// Iterative Preorder Traversal : - 


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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> preorder;
        if (root == NULL) return preorder;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            root = st.top();
            st.pop();
            preorder.push_back(root->val);

            if (root->right != NULL) {
                st.push(root->right);
            }

            if (root->left != NULL) {
                st.push(root->left);
            }
        }

        return preorder;
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

    vector<int> result = sol.preorderTraversal(root);

    // Print output
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}

