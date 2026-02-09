// Iterative PostOrder Traversal : - 
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if (root == NULL) return postorder;

        stack<TreeNode*> st;
        TreeNode* lastVisited = NULL;
        TreeNode* curr = root;

        while (curr != NULL || !st.empty()) {
            if (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            } else {
                TreeNode* topNode = st.top();
                if (topNode->right != NULL && topNode->right != lastVisited) {
                    curr = topNode->right;
                } else {
                    postorder.push_back(topNode->val);
                    lastVisited = topNode;
                    st.pop();
                }
            }
        }

        return postorder;
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

    vector<int> result = sol.postorderTraversal(root);

    // Print output
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
