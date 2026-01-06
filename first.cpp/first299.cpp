// Build & insert A BST ( Binary Search Tree ) : -

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node *insert(Node *root, int val)  
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }

    if (val < root->data)
    { // left subtree
        root->left = insert(root->left, val);
    }

    else
    { // right subtree
        root->right = insert(root->right, val);
    }

    return root; 
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node *buildBST(int arr[], int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}

int main()
{
    int arr[6] = {5, 1, 3 , 4, 2, 7};  // 1 2 3 4 5 7
    // int arr2[9] = {8 ,5 ,3 , 4 ,6, 10 ,11 14};

    Node *root = buildBST(arr, 6);
    inorder(root);
    return 0;
}