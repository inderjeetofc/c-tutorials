#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
} node;
int max(int a, int b)
{
    return a > b ? a : b;
}
int getHeight(node *ptr)
{
    if (ptr == NULL)
        return 0;
    return ptr->height;
}
node *createNode(int num)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = num;
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->height = 1;
    return ptr;
}
int balanceFactor(node *ptr)
{
    if (ptr == NULL)
        return 0;
    return (getHeight(ptr->left) - getHeight(ptr->right));
}
node *rightRotate(node *y)
{
    node *x = y->left;
    node *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    return x;
}
node *leftRotate(node *x)
{
    node *y = x->right;
    node *t2 = y->left;

    x->right = t2;
    y->left = x;
    // printf("\n x= %d , y= %d , t2 = %d", x->data, y->data);
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    // printf("\n y-ht %d", y->left->data);
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    // printf("\n x-ht %d", x->height);

    return y;
}
node *insertBSTAvl(node *ptr, int num)
{
    if (ptr == NULL)
        return (createNode(num));
    if (num < ptr->data)
    {
        ptr->left = insertBSTAvl(ptr->left, num);
    }
    else if (num > ptr->data)
    {
        ptr->right = insertBSTAvl(ptr->right, num);
        printf("\nptr->right %d %d", ptr->right->data, ptr->data);
    }

    ptr->height = 1 + max(getHeight(ptr->left), getHeight(ptr->right));
    int bf = balanceFactor(ptr);
    printf("\n i am here !!!! -%d %d %d", ptr->height, bf, ptr->data);

    // left left case -> right rotate
    if (bf > 1 && num < ptr->left->data)
        return rightRotate(ptr);

    //right right case -> left rotate
    if (bf < -1 && num > ptr->right->data)
    {
        printf("\n i am here -%d %d %d", ptr->height, bf, ptr->data);
        return leftRotate(ptr);
    }

    //left right case -> left rotate then right rot
    if (bf > 1 && num > ptr->left->data)
    {
        ptr->left = leftRotate(ptr->left);
        printf("\n i am active");
        return rightRotate(ptr);
    }

    //right left case -> right rot then left rot
    if (bf < -1 && num < ptr->right->data)
    {
        ptr->right = rightRotate(ptr->right);
        return leftRotate(ptr);
    }
    return ptr;
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
void preOrder(node *ptr)
{
    if (ptr != NULL)
    {
        printf(" %d ", ptr->data);
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
        printf(" %d ", ptr->data);
    }
}
int main()
{
    node *n = NULL;
    n = insertBSTAvl(n, 10);
    n = insertBSTAvl(n, 12);
    n = insertBSTAvl(n, 4);
    n = insertBSTAvl(n, 52);
    n = insertBSTAvl(n, 5);
    n = insertBSTAvl(n, 9);
    // n = insertBSTAvl(n, 2);
    // n = insertBSTAvl(n, 1);
    // n = insertBSTAvl(n, 4);
    // n = insertBSTAvl(n, 5);
    // n = insertBSTAvl(n, 6);
    // n = insertBSTAvl(n, 3);
    // n = insertBSTAvl(n, 13);
    printf("\nroot - %d", n->data);
    printf("\nroot height - %d", n->height);
    printf("\nElements in AVL tree are : -");
    preOrder(n);
    // postOrder(n);
    return 0;
}