// Recover BST | Correct BST with two nodes swapped : - 


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
    TreeNode *first = NULL, *middle = NULL, *last = NULL, *prev = NULL;

    // Morris Traversal to find swapped nodes
    void findSwappedNodes(TreeNode* root) {
        TreeNode* curr = root;
        while (curr) {
            if (!curr->left) {
                if (prev && prev->val > curr->val) {
                    if (!first) {
                        first = prev;
                        middle = curr;
                    } else {
                        last = curr;
                    }
                }
                prev = curr;
                curr = curr->right;
            } else {
                TreeNode* pred = curr->left;
                while (pred->right && pred->right != curr) pred = pred->right;

                if (!pred->right) {
                    pred->right = curr;
                    curr = curr->left;
                } else {
                    pred->right = NULL;
                    if (prev && prev->val > curr->val) {
                        if (!first) {
                            first = prev;
                            middle = curr;
                        } else {
                            last = curr;
                        }
                    }
                    prev = curr;
                    curr = curr->right;
                }
            }
        }
    }

    void recoverTree(TreeNode* root) {
        findSwappedNodes(root);
        if (first && last) swap(first->val, last->val);
        else if (first && middle) swap(first->val, middle->val);
    }
};

// Utility function for Inorder Traversal
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// Driver Code
int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(2); // Swapped nodes: 2 and 3

    cout << "Before Fix: ";
    inorder(root);
    cout << endl;

    Solution sol;
    sol.recoverTree(root);

    cout << "After Fix: ";
    inorder(root);
    cout << endl;

    return 0;
}
