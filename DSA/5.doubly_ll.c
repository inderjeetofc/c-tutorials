#include <stdio.h>
#include <stdlib.h>
typedef struct linkedListNode
{
    int data;
    struct linkedListNode *prev;
    struct linkedListNode *next;
} node;
void showForward(node *ptr)
{
    int i = 1;
    while (ptr != NULL)
    {
        printf("\ndata at %d is: %d", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}
void showBackward(node *ptr)
{
    int i = 1;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        i++;
    }
    while (ptr != NULL)
    {
        printf("\ndata at %d is: %d", i, ptr->data);
        ptr = ptr->prev;
        i--;
    }
}
int main()
{
    node *n1, *n2, *n3, *n4, *n5;
    n1 = (node *)malloc(sizeof(node));
    n2 = (node *)malloc(sizeof(node));
    n3 = (node *)malloc(sizeof(node));
    n4 = (node *)malloc(sizeof(node));
    n5 = (node *)malloc(sizeof(node));
    //adding elements in  node
    n1->data = 54;
    n1->prev = NULL;
    n1->next = n2;
    n2->prev = n1;
    n2->data = 154;
    n2->next = n3;
    n3->data = 585;
    n3->prev = n2;
    n3->next = n4;
    n4->data = 49;
    n4->prev = n3;
    n4->next = n5;
    n5->data = -10;
    n5->prev = n4;
    n5->next = NULL;
    printf("\nTraversing in forward direction :-");
    showForward(n1);
    printf("\nTraversing in backward direction :-");
    showBackward(n1);
    return 0;
}