// ques - initialising tree and its traversal

#include <bits/stdc++.h>
using namespace std;
struct treeDS
{
    int data;
    treeDS *left;
    treeDS *right;
    treeDS(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
// traversal in depth first search - this is always with respect to root
treeDS *insert(treeDS *root, int data)
{
}
void inorder(treeDS *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(treeDS *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(treeDS *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main()
{
    treeDS *root = new treeDS(10);
    root->left = new treeDS(20);
    root->right = new treeDS(30);
    root->left->left = new treeDS(40);
    // root = insert(root, 20);
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    return 0;
}