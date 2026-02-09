// Check It Two Trees Are Identical Or Not : - 


#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isIdentical(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;  // Both trees are empty
        if (p == NULL || q == NULL) return false; // One tree is empty

        return (p->val == q->val) && 
               isIdentical(p->left, q->left) && 
               isIdentical(p->right, q->right);
    }
};

int main() {
    Solution sol;

    // Example Trees:
    // Tree 1:
    //        1
    //       / \
    //      2   3
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    // Tree 2:
    //        1
    //       / \
    //      2   3
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    cout << (sol.isIdentical(root1, root2) ? "Identical" : "Not Identical") << endl;

    return 0;
}
