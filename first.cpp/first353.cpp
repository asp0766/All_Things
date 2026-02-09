// Construct the Binary Tree from Postorder and Inorder Traversal :  -


#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    unordered_map<int, int> inorderMap;
    int postIndex;

    TreeNode* buildTreeHelper(vector<int>& postorder, vector<int>& inorder, int left, int right) {
        if (left > right) return NULL;

        int rootVal = postorder[postIndex--];
        TreeNode* root = new TreeNode(rootVal);

        int inorderIndex = inorderMap[rootVal];

        root->right = buildTreeHelper(postorder, inorder, inorderIndex + 1, right);
        root->left = buildTreeHelper(postorder, inorder, left, inorderIndex - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        postIndex = postorder.size() - 1;

        for (int i = 0; i < inorder.size(); i++) {
            inorderMap[inorder[i]] = i;
        }

        return buildTreeHelper(postorder, inorder, 0, inorder.size() - 1);
    }

    void printTree(TreeNode* root, int space = 0, int level_gap = 5) {
        if (!root) return;

        space += level_gap;
        printTree(root->right, space);

        cout << endl;
        for (int i = level_gap; i < space; i++) cout << " ";
        cout << root->val << "\n";

        printTree(root->left, space);
    }
};

int main() {
    Solution sol;
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};

    TreeNode* root = sol.buildTree(inorder, postorder);

    cout << "Tree Structure:\n";
    sol.printTree(root);
    return 0;
}
