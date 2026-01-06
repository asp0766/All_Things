// Print all the Nodes at a distance of K in Binary Tree : -


#include <iostream>
#include <vector>
#include <unordered_map>
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
    unordered_map<TreeNode*, TreeNode*> parentMap;

    // Step 1: Map each node to its parent
    void markParents(TreeNode* root, TreeNode* parent) {
        if (!root) return;
        parentMap[root] = parent;
        markParents(root->left, root);
        markParents(root->right, root);
    }

    // Step 2: Find all nodes at distance K
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        markParents(root, NULL); // Map nodes to parents

        queue<TreeNode*> q;
        unordered_map<TreeNode*, bool> visited;
        q.push(target);
        visited[target] = true;

        int distance = 0;
        while (!q.empty()) {
            if (distance == k) break;
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left && !visited[node->left]) {
                    q.push(node->left);
                    visited[node->left] = true;
                }
                if (node->right && !visited[node->right]) {
                    q.push(node->right);
                    visited[node->right] = true;
                }
                if (parentMap[node] && !visited[parentMap[node]]) {
                    q.push(parentMap[node]);
                    visited[parentMap[node]] = true;
                }
            }
            distance++;
        }

        vector<int> result;
        while (!q.empty()) {
            result.push_back(q.front()->val);
            q.pop();
        }
        return result;
    }
};

int main() {
    Solution sol;

    // Example Tree:
    //        3
    //       / \
    //      5   1
    //     / \  / \
    //    6  2 0   8
    //      / \
    //     7   4
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    TreeNode* target = root->left; // Node with value 5
    int k = 2;

    vector<int> result = sol.distanceK(root, target, k);

    cout << "Nodes at distance " << k << " from " << target->val << ": ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

