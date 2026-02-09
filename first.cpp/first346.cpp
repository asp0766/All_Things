// Maximum Width of Binary Tree :  -


#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        queue<pair<TreeNode*, unsigned long long>> q; // {Node, Index}
        q.push({root, 0});
        int maxWidth = 0;

        while (!q.empty()) {
            int size = q.size();
            unsigned long long leftMost = q.front().second;
            unsigned long long rightMost = q.back().second;

            maxWidth = max(maxWidth, (int)(rightMost - leftMost + 1));

            for (int i = 0; i < size; i++) {
                auto [node, index] = q.front();
                q.pop();

                unsigned long long newIndex = index - leftMost; // Normalize to prevent overflow

                if (node->left) q.push({node->left, 2 * newIndex + 1});
                if (node->right) q.push({node->right, 2 * newIndex + 2});
            }
        }
        return maxWidth;
    }
};

int main() {
    Solution sol;

    // Example Tree:
    //        1
    //       / \
    //      2   3
    //     /     \
    //    4       5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    cout << "Maximum Width of Binary Tree: " << sol.widthOfBinaryTree(root) << endl;

    return 0;
}
