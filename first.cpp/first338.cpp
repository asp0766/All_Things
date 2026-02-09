// Vertical Order Traversal in BT : - 


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
    vector<vector<int>> verticalOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;

        map<int, map<int, vector<int>>> nodes; // {HD -> {Level -> [Nodes]}}
        queue<pair<TreeNode*, pair<int, int>>> q; // {Node, {HD, Level}}

        q.push(make_pair(root, make_pair(0, 0))); // Start with root at HD = 0, Level = 0

        while (!q.empty()) {
            pair<TreeNode*, pair<int, int>> temp = q.front();
            q.pop();

            TreeNode* node = temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;

            nodes[hd][level].push_back(node->val);

            if (node->left) q.push(make_pair(node->left, make_pair(hd - 1, level + 1)));
            if (node->right) q.push(make_pair(node->right, make_pair(hd + 1, level + 1)));
        }

        for (auto &p : nodes) {
            vector<int> col;
            for (auto &q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            result.push_back(col);
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

    vector<vector<int>> result = sol.verticalOrder(root);

    for (auto level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}


