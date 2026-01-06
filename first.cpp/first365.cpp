// Construct a BST from a preorder traversal : -


#include <iostream>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.empty()) return NULL;

        TreeNode* root = new TreeNode(preorder[0]);
        stack<TreeNode*> st;
        st.push(root);

        for (int i = 1; i < preorder.size(); i++) {
            TreeNode* node = new TreeNode(preorder[i]);
            TreeNode* parent = NULL;

            while (!st.empty() && st.top()->val < preorder[i]) {
                parent = st.top();
                st.pop();
            }

            if (parent) {
                parent->right = node;
            } else {
                st.top()->left = node;
            }

            st.push(node);
        }

        return root;
    }

    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
};

int main() {
    Solution sol;
    vector<int> preorder = {8, 5, 1, 7, 10, 12};

    TreeNode* root = sol.bstFromPreorder(preorder);
    cout << "Inorder Traversal: ";
    sol.inorder(root);
    cout << endl;

    return 0;
}
