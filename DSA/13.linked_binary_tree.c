#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;
node *createNode(int data)
{
    node *n;
    n = (node *)malloc(sizeof(node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preOrder(node *ptr)
{
    if (ptr != NULL)
    {
        printf("\n%d", ptr->data);
        preOrder(ptr->left);
        preOrder(ptr->right);
    }
}
void postOrder(node *ptr)
{
    if (ptr != NULL)
    {
        postOrder(ptr->left);
        postOrder(ptr->right);
        printf("\n%d", ptr->data);
    }
}
void inOrder(node *ptr)
{
    if (ptr != NULL)
    {
        inOrder(ptr->left);
        printf(" %d ", ptr->data);
        inOrder(ptr->right);
    }
}
int isBST(node *ptr)
{
    static node *prev = NULL;
    if (ptr != NULL)
    {
        isBST(ptr->left);
        if (prev != NULL && prev->data >= ptr->data)
        {
            return 0;
        }
        prev = ptr;
        printf("\n%d", ptr->data);
        isBST(ptr->right);
    }
    else
    {
        return 1;
    }
}
node *searchBST(node *ptr, int num)
{
    static int count = 0;
    if (ptr != NULL)
    {
        if (num > ptr->data)
        {
            count++;
            return searchBST(ptr->right, num);
        }
        else if (num < ptr->data)
        {
            count++;
            return searchBST(ptr->left, num);
        }
        else
        {
            printf("\nFound number %d in %d iterations", num, count);
            return ptr;
        }
    }
}
int searchIter(node *ptr, int num)
{
    while (ptr != NULL)
    {
        if (num > ptr->data)
        {
            ptr = ptr->right;
        }
        else if (num < ptr->data)
        {
            ptr = ptr->left;
        }
        else
            return 1;
    }
    return 0;
}
node *insertBST(node *ptr, int num)
{
    node *root = ptr;
    node *prev;
    node *n = createNode(num);
    while (ptr != NULL)
    {
        prev = ptr;
        if (num > (ptr)->data)
            ptr = (ptr)->right;
        else if (num < (ptr)->data)
            ptr = (ptr)->left;
        else
            return NULL;
    }
    if (num > prev->data)
        prev->right = n;
    else
        prev->left = n;
    return root;
}
node *deleteLeaf(node *ptr, int num)
{
    node *prev;
    while (ptr != NULL)
    {
        if (num > ptr->data)
        {
            prev = ptr;
            ptr = ptr->right;
        }
        else if (num < ptr->data)
        {
            prev = ptr;

            ptr = ptr->left;
        }
        else
        {
            if (prev->left->data == num)
            {
                node *temp = prev->left;
                prev->left = NULL;
                return temp;
            }
            else
            {
                node *temp = prev->right;
                prev->right = NULL;
                return temp;
            }
        }
    }
    printf("\nNumber not pressent in BST");
    return NULL;
}
node *inOrderPre(node *ptr)
{
    ptr = ptr->left;
    while (ptr->right != NULL)
    {
        ptr = ptr->right;
    }
    return ptr;
}
node *deleteNode(node *ptr, int num)
{
    node *ipre;
    if (ptr->left == NULL && ptr->right == NULL)
    {
        free(ptr);
        return NULL;
    }
    if (num < ptr->data)
    {
        ptr->left = deleteNode(ptr->left, num);
    }
    else if (num > ptr->data)
    {
        ptr->right = deleteNode(ptr->right, num);
    }
    else
    {
        ipre = inOrderPre(ptr);
        ptr->data = ipre->data;
        ptr->left = deleteNode(ptr->left, ipre->data);
    }
    return ptr;
}

int main()
{
    node *p = createNode(16);
    node *p1 = createNode(10);
    node *p2 = createNode(19);
    node *p3 = createNode(4);
    node *p4 = createNode(14);
    node *p5 = createNode(17);
    node *p6 = createNode(27);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    // int arr[100];
    // preOrder(p);
    // postOrder(p);
    // inOrder(p);

    //-----------------------check if bst or not

    // int check = isBST(p);
    // if (check)
    //     printf("\nis BST");
    // else
    //     printf("\nNot a BST");

    //----------------------search in BST recursion

    // searchBST(p, 30);
    // node *dummy = searchBST(p, 60);
    // if (!dummy)
    //     printf("\nNumber is not present !");

    //-----------------------searching by iteration

    // int check = searchIter(p, 2);
    // if (check)
    //     printf("\nNumber found !");
    // else
    //     printf("\nNumber not found !");
    // else
    //     printf("\n Number is not present !");

    //----------------insertion in BST

    printf("\nBST before insertion : -");
    inOrder(p);
    p = insertBST(p, 1);
    p = insertBST(p, 15);
    p = insertBST(p, 8);
    p = insertBST(p, 12);
    if (p)
    {
        printf("\ninsertion succesfull !");
        printf("\nBST after insertion : -");
        inOrder(p);
    }
    else
        printf("\nNumber is already present insertion failed !");

    //deletion in BST - leaf node !

    // printf("\nBST before deletion : -");
    // inOrder(p);
    // node *delNode = deleteLeaf(p, 2);
    // if (delNode)
    //     printf("\nNode deleted is %d ", delNode->data);
    // printf("\nBST after deletion : -");
    // inOrder(p);

    // deletion in BST any node (general)

    printf("\nBST before deletion : -");
    inOrder(p);
    deleteNode(p, 10);
    printf("\nBST after deletion : -");
    inOrder(p);
}