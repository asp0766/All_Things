// Serialize and De-serialize Binary Tree  : -


#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:
    // **Serialize the Tree**
    string serialize(TreeNode* root) {
        if (!root) return "N";  // N for NULL nodes
        
        queue<TreeNode*> q;
        q.push(root);
        stringstream ss;

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (node) {
                ss << node->val << " ";
                q.push(node->left);
                q.push(node->right);
            } else {
                ss << "N ";
            }
        }
        return ss.str();
    }

    // **Deserialize the String**
    TreeNode* deserialize(string data) {
        if (data == "N") return NULL;

        stringstream ss(data);
        string val;
        ss >> val;

        TreeNode* root = new TreeNode(stoi(val));
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (!(ss >> val)) break;
            if (val != "N") {
                node->left = new TreeNode(stoi(val));
                q.push(node->left);
            }

            if (!(ss >> val)) break;
            if (val != "N") {
                node->right = new TreeNode(stoi(val));
                q.push(node->right);
            }
        }
        return root;
    }

    // **Print the Tree (For Testing)**
    void printTree(TreeNode* root, int space = 0, int level_gap = 5) {
        if (!root) return;

        space += level_gap;
        printTree(root->right, space);

        cout << endl;
        for (int i = level_gap; i < space; i++) cout << " ";
        cout << root->val << "\n";

        printTree(root->left, space);
    }
};

int main() {
    Codec codec;

    // Example Tree:
    //        1
    //       / \
    //      2   3
    //         / \
    //        4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    // **Serialization**
    string serializedTree = codec.serialize(root);
    cout << "Serialized Tree: " << serializedTree << endl;

    // **Deserialization**
    TreeNode* newRoot = codec.deserialize(serializedTree);
    cout << "\nDeserialized Tree Structure:\n";
    codec.printTree(newRoot);

    return 0;
}
