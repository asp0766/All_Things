// Bottom View BT : -


#include <iostream>
#include <vector>
#include <map>
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
    vector<int> bottomView(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        map<int, int> bottomNodes; // {Horizontal Distance -> Node Value}
        queue<pair<TreeNode*, int>> q; // {Node, Horizontal Distance}

        q.push({root, 0}); // Root node at HD = 0

        while (!q.empty()) {
            auto temp = q.front();
            q.pop();

            TreeNode* node = temp.first;
            int hd = temp.second;

            // Always update node at each horizontal distance
            bottomNodes[hd] = node->val;

            if (node->left) q.push({node->left, hd - 1});
            if (node->right) q.push({node->right, hd + 1});
        }

        for (auto &entry : bottomNodes) {
            result.push_back(entry.second);
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

    vector<int> result = sol.bottomView(root);

    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}

