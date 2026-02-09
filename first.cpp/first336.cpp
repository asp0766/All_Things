// Zig-Zag Traversal in BT : -


#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL) return result;

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> level(size);

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                // Determine the position in level array
                int index = leftToRight ? i : (size - 1 - i);
                level[index] = node->val;

                if (node->left != NULL) q.push(node->left);
                if (node->right != NULL) q.push(node->right);
            }

            result.push_back(level);
            leftToRight = !leftToRight;  // Flip direction
        }

        return result;
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

    vector<vector<int>> result = sol.zigzagLevelOrder(root);

    // Print output
    for (auto level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
