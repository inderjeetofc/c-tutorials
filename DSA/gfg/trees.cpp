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
int heightOfTree(treeDS *root)
{
    if (root == NULL)
        return 0;
    return max(heightOfTree(root->left), heightOfTree(root->right)) + 1;
}
void printKFromRoot(treeDS *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->data << endl;
    else
    {
        printKFromRoot(root->left, k - 1);
        printKFromRoot(root->right, k - 1);
    }
}
// time complexity of following level order traversal is BIG O(n+h*n)
void levelOrderTraversal(treeDS *root)
{
    int height = heightOfTree(root);
    int k = 0;
    cout << "Level order traversal is : -" << endl;
    while (k != height)
    {
        printKFromRoot(root, k);
        k++;
    }
}
// BIG O(n) solution wiht queue data structure
void levelOrderTraversalWithQ(queue<treeDS *> q)
{
    cout << q.front()->data << " ";
    q.push(q.front()->left);
    q.push(q.front()->right);
    q.pop();
    levelOrderTraversalWithQ(q);
    // q.push(root->left)
}
// Aliter
void AlevelOrderTraversalWithQ(treeDS *root)
{
    if (root == NULL)
        return;
    queue<treeDS *> q;
    q.push(root);
    while (!q.empty())
    {
        cout << q.front()->data << " ";
        if (q.front()->left != NULL)
            q.push(q.front()->left);
        if (q.front()->right != NULL)
            q.push(q.front()->right);
        q.pop();
    }
}
int main()
{
    treeDS *root = new treeDS(10);
    root->left = new treeDS(20);
    root->left->right = new treeDS(90);
    root->right = new treeDS(30);
    root->right->left = new treeDS(100);
    root->left->left = new treeDS(40);
    root->right->right = new treeDS(54);
    // root = insert(root, 20);
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    cout << "height of binary tree is - " << heightOfTree(root) << endl;
    printKFromRoot(root, 2);
    levelOrderTraversal(root);
    queue<treeDS *> q;
    q.push(root);
    // with queue as argument
    cout << "queue as argument - " << endl;
    levelOrderTraversalWithQ(q);
    // aliter waala
    cout << "aliter to above - " << endl;
    AlevelOrderTraversalWithQ(root);
    return 0;
}