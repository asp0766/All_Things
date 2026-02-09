// Morris Traversal | Preorder : - 


#include <iostream>
using namespace std;

void morrisPreorder(TreeNode* root) {
    TreeNode* curr = root;
    while (curr) {
        if (!curr->left) {
            cout << curr->val << " ";
            curr = curr->right;
        } else {
            TreeNode* prev = curr->left;
            while (prev->right && prev->right != curr) {
                prev = prev->right;
            }

            if (!prev->right) {
                cout << curr->val << " ";
                prev->right = curr;
                curr = curr->left;
            } else {
                prev->right = NULL;
                curr = curr->right;
            }
        }
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Morris Preorder Traversal: ";
    morrisPreorder(root);
    return 0;
}
