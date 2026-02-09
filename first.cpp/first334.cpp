// Maximum Path sum in BT : -


#include<iostream>
#include<climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxPathSumHelper(TreeNode* root, int &maxSum) {
        if (root == NULL) return 0;

        int leftSum = max(0, maxPathSumHelper(root->left, maxSum));  // Ignore negative paths
        int rightSum = max(0, maxPathSumHelper(root->right, maxSum));

        maxSum = max(maxSum, leftSum + rightSum + root->val);  // Update max sum

        return root->val + max(leftSum, rightSum);  // Return max sum of a single path
    }

    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxPathSumHelper(root, maxSum);
        return maxSum;
    }
};

int main() {
    Solution sol;

    // Example Tree:
    //        -10
    //        /  \
    //       9   20
    //          /  \
    //         15   7
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    cout << "Max Path Sum: " << sol.maxPathSum(root) << endl;

    return 0;
}
