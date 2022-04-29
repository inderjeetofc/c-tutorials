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
    treeDS *temp = NULL;
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
void levelOrderLineByLine(treeDS *root)
{
    if (root == NULL)
        return;
    queue<treeDS *> q;
    treeDS *temp = NULL;
    q.push(root);
    q.push(temp);
    while (q.size() > 1)
    {
        if (q.front() == NULL)
        {
            q.push(temp);
            cout << endl;
            q.pop();
            continue;
        }
        cout << q.front()->data << " ";
        if (q.front()->left != NULL)
            q.push(q.front()->left);
        if (q.front()->right != NULL)
            q.push(q.front()->right);
        q.pop();
    }
}
// aliter solution with loop
void AlevelOrderLineByLine(treeDS *root)
{
    if (root == NULL)
        return;
    queue<treeDS *> q;
    treeDS *temp = NULL;
    q.push(root);
    while (q.size() > 0)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            cout << q.front()->data << " ";
            if (q.front()->left != NULL)
                q.push(q.front()->left);
            if (q.front()->right != NULL)
                q.push(q.front()->right);
            q.pop();
        }
        cout << endl;
    }
}
int sizeOfTree(treeDS *root)
{
    if (root == NULL)
        return 0;
    return (1 + sizeOfTree(root->left) + sizeOfTree(root->right));
}
void leftViewOfTree(treeDS *root)
{
    queue<treeDS *> q;
    q.push(root);
    cout << root->data << " ";
    q.push(NULL);
    while (q.size() > 1)
    {
        if (q.front() == NULL)
        {
            q.push(NULL);
            q.pop();
            cout << q.front()->data << " ";
            continue;
        }
        if (q.front()->left != NULL)
            q.push(q.front()->left);
        if (q.front()->right != NULL)
            q.push(q.front()->right);
        q.pop();
    }

    while (!q.empty())
    {
        cout << q.front()->data << " ";
    }
}
int childrenSum(treeDS *root)
{
    // right solution recursively
    if (root == NULL)
        return 0;
    int sum = childrenSum(root->left) + childrenSum(root->right);
    if (sum == 0)
        return root->data;
    else
        return (sum == root->data ? root->data : -1);

    // not working code urf faltu code
    //  queue<treeDS *> q;
    //  q.push(root);
    //  while (q.empty() == false)
    //  {
    //      treeDS *curr = q.front();
    //      if (curr->left != NULL && curr->right != NULL)
    //      {
    //          if (curr->left->data + curr->right->data == curr->data)
    //          {
    //              q.push(curr->left);
    //              q.push(curr->right);
    //          }
    //          else if (curr->left == NULL)
    //          {
    //              if (curr->right->data == curr->data)
    //                  q.push(curr->right);
    //              else
    //                  return 0;
    //          }
    //          else if (curr->right == NULL)
    //          {
    //              if (curr->left->data == curr->data)
    //                  q.push(curr->left);
    //              else
    //                  return 0;
    //          }
    //          else
    //              return 0;
    //      }
    //      q.pop();
    //  }
    //  return 1;
}
int balancedHeight(treeDS *root)
{
    if (root == NULL)
        return 0;
    int left = balancedHeight(root->left);
    int right = balancedHeight(root->right);
    if (left < 0 || right < 0)
        return -1;
    if (abs(left - right) <= 1)
        return max(left, right) + 1;
    return -1;
}
int maxWidthOfTree(treeDS *root)
{
    queue<treeDS *> q;
    q.push(root);
    q.push(NULL);
    int width = INT_MIN;
    while (q.size() > 1)
    {
        treeDS *curr = q.front();
        if (curr == NULL)
        {
            int size = q.size() - 1;
            width = max(width, size);
            q.push(NULL);
            q.pop();
            continue;
        }
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
        q.pop();
    }
    return width;
}
treeDS *treeToDoublyLL(treeDS *root)
{
    // right solution maintaining prev pointer
    static treeDS *node = NULL;
    if (root == NULL)
        return root;
    treeDS *head = treeToDoublyLL(root->left);
    if (node == NULL)
        head = root;
    else
    {
        node->right = root;
        root->left = node;
    }
    node = root;
    treeToDoublyLL(root->right);
    return head;

    // working code hai but poor quality
    //     if (root == NULL)
    //         return root;
    //     treeDS *node = treeToDoublyLL(root->left);
    //     root->left = node;
    //     if (node != NULL)
    //     {
    //         node->right = root;
    //     }
    //     node = treeToDoublyLL(root->right);
    //     root->right = node;
    //     if (node != NULL)
    //     {
    //         node->left = root;
    //         return node;
    //     }
    //     return root;
}
void llTraversal(treeDS *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->right;
    }
}
// construct binary tree with pre and inorder traversal -----------pending
void printInSpiral(treeDS *root)
{
    // my own solution using deque
    //  deque<treeDS *> q;
    //  q.push_back(root);
    //  bool flag = 0;
    //  while (!q.empty())
    //  {
    //      int size = q.size();
    //      for (int i = 0; i < size; i++)
    //      {
    //          if (!flag)
    //          {
    //              treeDS *curr = q.back();
    //              cout << curr->data << " ";
    //              if (curr->left != NULL)
    //                  q.push_front(curr->left);
    //              if (curr->right != NULL)
    //                  q.push_front(curr->right);
    //              q.pop_back();
    //          }
    //          else
    //          {
    //              treeDS *curr = q.front();
    //              cout << curr->data << " ";
    //              if (curr->right != NULL)
    //                  q.push_back(curr->right);
    //              if (curr->left != NULL)
    //                  q.push_back(curr->left);
    //              q.pop_front();
    //          }
    //      }
    //      flag = !flag;
    //  }
    // sir sol using two stack
    stack<treeDS *> s1;
    stack<treeDS *> s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            cout << s1.top()->data << " ";
            if (s1.top()->left != NULL)
                s2.push(s1.top()->left);
            if (s1.top()->right != NULL)
                s2.push(s1.top()->right);
            s1.pop();
        }
        while (!s2.empty())
        {
            cout << s2.top()->data << " ";
            if (s2.top()->right != NULL)
                s1.push(s2.top()->right);
            if (s2.top()->left != NULL)
                s1.push(s2.top()->left);
            s2.pop();
        }
    }
    cout << endl;
}
int main()
{
    treeDS *root = new treeDS(10);
    root->left = new treeDS(20);
    root->left->right = new treeDS(90);
    root->right = new treeDS(30);
    root->right->left = new treeDS(100);
    root->left->left = new treeDS(40);
    root->left->left->left = new treeDS(45);
    root->right->right = new treeDS(54);

    // for left view cases
    // treeDS *root = new treeDS(10);
    // root->left = new treeDS(20);
    // root->right = new treeDS(30);
    // root->right->right = new treeDS(50);
    // root->right->right->left = new treeDS(60);
    // root->right->right->left->right = new treeDS(80);

    // for children sum case
    // treeDS *root = new treeDS(10);
    // root->left = new treeDS(8);
    // root->left->left = new treeDS(3);
    // root->left->right = new treeDS(5);
    // root->right = new treeDS(2);
    // root->right->right = new treeDS(2);

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
    // queue<treeDS *> q;
    // q.push(root);
    // with queue as argument
    // cout << "queue as argument - " << endl;
    // levelOrderTraversalWithQ(q);
    // aliter waala
    // cout << "aliter to above - " << endl;
    // AlevelOrderTraversalWithQ(root);
    // cout << endl;
    // levelOrderLineByLine(root);
    // cout << endl;
    // AlevelOrderLineByLine(root);
    // cout << "size of tree is - " << sizeOfTree(root) << endl;
    // cout << "left view is -  " << endl;
    // leftViewOfTree(root);
    // cout << endl;
    // cout << "whether children sum is true - " << childrenSum(root) << endl;
    // cout << "whether height is balanced or not - " << balancedHeight(root) << endl;
    // cout << "Max width of tree is - " << maxWidthOfTree(root) << endl;

    //-----galat code that worked somehow for tree to linked list
    // treeDS *rootL = treeToDoublyLL(root->left);
    // treeDS *rootR = treeToDoublyLL(root->right);
    // root->left = rootL;
    // rootL->right = root;
    // treeDS *ptr = rootR;
    // while (ptr->left != NULL)
    // {
    //     ptr = ptr->left;
    // }
    // root->right = ptr;
    // ptr->left = root;

    // llTraversal(rootR);
    // cout << endl;
    // treeDS *rootN = treeToDoublyLL(root);
    // llTraversal(rootN);
    cout << "spiral traversal is - ";
    printInSpiral(root);
    return 0;
}