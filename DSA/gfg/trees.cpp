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
int sizeOfTree(treeDS *root)
{
    if (root == NULL)
        return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
int maxOfTree(treeDS *root)
{
    if (root == NULL)
        return INT_MIN;
    // static int maximum = 0;
    // maxOfTree(root->left);
    // maximum = max(maximum, root->data);
    // maxOfTree(root->right);
    // return maximum;

    // shortcut
    return max(root->data, max(maxOfTree(root->left), maxOfTree(root->right)));
}
// aliter with queue
int AmaxOfTree(treeDS *root)
{
    queue<treeDS *> q;
    q.push(root);
    int maximum = INT_MIN;
    while (!q.empty())
    {
        if (q.front()->left != NULL)
            q.push(q.front()->left);
        if (q.front()->right != NULL)
            q.push(q.front()->right);
        maximum = max(maximum, q.front()->data);
        q.pop();
    }
    return maximum;
}
void findCelingOnLeftSide(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        auto itr = s.upper_bound(arr[i]);
        if (itr != s.end())
        {
            cout << *itr << " ";
        }
        else
            cout << -1 << " ";
        s.insert(arr[i]);
    }
    cout << endl;
}
int kSmallestELement(int arr[], int n, int k)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        k--;
        if (k == 0)
            return *itr;
    }
    return 0;
}
bool checkBST(treeDS *root)
{
    static treeDS *prevRoot = NULL;
    if (root == NULL)
        return true;
    if (!checkBST(root->left))
        return false;

    if (prevRoot == NULL)
        prevRoot = root;
    else
    {
        if (prevRoot->data > root->data)
            return false;
        prevRoot = root;
    }
    return checkBST(root->right);
}
treeDS *swapTwoNodesBST(treeDS *root)
{
    static int prevRoot = INT_MIN;
    static treeDS *ptr = NULL;
    if (root == NULL)
        return root;
    if (!checkBST(root->left))
    {
        return root;
    }
    if (prevRoot > root->data)
    {
        if (ptr == NULL)
        {
            ptr = root;
        }
        else
        {
            int tempVal = ptr->data;
            ptr->data = root->data;
            root->data = tempVal;
        }
    }
    prevRoot = root->data;
    return checkBST(root->right);
}
int main()
{
    // treeDS *root = new treeDS(10);
    // root->left = new treeDS(20);
    // root->left->right = new treeDS(170);
    // root->right = new treeDS(30);
    // root->left->left = new treeDS(40);
    // root->left->left->left = new treeDS(50);
    // root->left->left->right = new treeDS(60);
    // root->left->left->right->left = new treeDS(25);
    // root->right->left = new treeDS(70);
    // root->right->right = new treeDS(80);

    // new tree for left view case
    // treeDS *root = new treeDS(30);
    // root->left = new treeDS(20);
    // root->right = new treeDS(50);
    // root->right->left = new treeDS(60);
    // root->right->left->right = new treeDS(80);

    // BST tree
    // treeDS *root = new treeDS(10);
    // root->left = new treeDS(5);
    // root->left->left = new treeDS(3);
    // root->left->right = new treeDS(8);
    // root->right = new treeDS(40);
    // root->right->left = new treeDS(30);
    // root->right->right = new treeDS(50);
    // root->right->right->right = new treeDS(60);
    // root->right->right->right->right = new treeDS(80);
    // root = insert(root, 20);

    treeDS *root = new treeDS(20);
    root->left = new treeDS(8);
    root->right = new treeDS(30);
    root->right->left = new treeDS(18);
    root->right->right = new treeDS(35);
    root->left->right = new treeDS(8);

    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    cout << "size of tree is - " << sizeOfTree(root) << endl;
    cout << "max of tree is - " << maxOfTree(root) << endl;
    cout << "max of tree aliter is - " << AmaxOfTree(root) << endl;
    int arr[] = {6, 18, 1, 3, 54, 23, 9, 63};
    findCelingOnLeftSide(arr, 8);
    cout << kSmallestELement(arr, 8, 7) << endl; // big O(logN) solution
    cout << checkBST(root) << endl;
    return 0;
}