// Count total Nodes in a COMPLETE Binary Tree | O(Log^2 N) Approach : - 


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
    int computeDepth(TreeNode* root) {
        int depth = 0;
        while (root->left) {
            root = root->left;
            depth++;
        }
        return depth;
    }

    int countNodes(TreeNode* root) {
        if (!root) return 0;

        int leftDepth = computeDepth(root->left);
        int rightDepth = computeDepth(root->right);

        if (leftDepth == rightDepth) {
            return (1 << leftDepth) + countNodes(root->right);
        } else {
            return (1 << rightDepth) + countNodes(root->left);
        }
    }
};

int main() {
    Solution sol;

    // Example Complete Binary Tree:
    //        1
    //       / \
    //      2   3
    //     / \  /
    //    4   5 6
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    cout << "Total nodes in CBT: " << sol.countNodes(root) << endl;

    return 0;
}
