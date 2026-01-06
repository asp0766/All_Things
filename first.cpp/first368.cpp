// Two Sum In BST | Check if there exists a pair with Sum K : -


#include <iostream>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// BST Iterator (Inorder and Reverse Inorder)
class BSTIterator {
private:
    stack<TreeNode*> st;
    bool reverse;

    void pushNodes(TreeNode* node) {
        while (node) {
            st.push(node);
            node = reverse ? node->right : node->left;
        }
    }

public:
    BSTIterator(TreeNode* root, bool isReverse) {
        reverse = isReverse;
        pushNodes(root);
    }

    int next() {
        TreeNode* node = st.top();
        st.pop();
        if (reverse) pushNodes(node->left);  // Reverse Inorder
        else pushNodes(node->right);  // Inorder
        return node->val;
    }

    bool hasNext() {
        return !st.empty();
    }
};

// Function to find if a pair exists
bool findTarget(TreeNode* root, int K) {
    if (!root) return false;

    BSTIterator leftIter(root, false);  // Inorder (Ascending)
    BSTIterator rightIter(root, true);  // Reverse Inorder (Descending)

    int low = leftIter.next();
    int high = rightIter.next();

    while (low < high) {
        if (low + high == K) return true;
        else if (low + high < K) low = leftIter.next();
        else high = rightIter.next();
    }
    return false;
}

// Driver Code
int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    int K = 10;
    if (findTarget(root, K)) cout << "Pair Exists\n";
    else cout << "No Pair Found\n";

    return 0;
}
