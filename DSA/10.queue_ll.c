#include <stdio.h>
#include <stdlib.h>
typedef struct llNode
{
    int data;
    struct llDataType *next;
} node;
int isFull(node *dummy)
{
    if (dummy == NULL)
        return 1;
    else
        return 0;
}
int isEmpty(node *f)
{
    if (f == NULL)
        return 1;
    else
        return 0;
}
void enqueue(node **f, node **b, int val)
{
    node *dummy = (node *)malloc(sizeof(node));
    if (isFull(dummy))
        printf("\nQueue is full in LL !");
    else
    {
        dummy->data = val;
        dummy->next = NULL;
        if (*f == NULL && *b == NULL)
            *f = *b = dummy;
        else
        {
            (*b)->next = dummy;
            *b = dummy;
        }
    }
}
int dequeue(node **f)
{
    node *temp = (node *)malloc(sizeof(node));
    temp = *f;
    if (isEmpty(temp))
    {
        printf("\nQueue is empty in LL !");
        free(temp);
        return -1;
    }
    else
    {
        int val = temp->data;
        *f = temp->next;
        free(temp);
        return (val);
    }
}
void show(node *ptr)
{
    printf("\nELements of queue are : - ");
    while (ptr != NULL)
    {
        printf("\n%d", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    node *head = (node *)malloc(sizeof(node));
    node *f = (node *)malloc(sizeof(node));
    node *b = (node *)malloc(sizeof(node));
    f = b = NULL;
    int val;
    // printf("\nEnter element you want to insert in queue : - ");
    // scanf("%d", &val);
    // enqueue(&f, &b, val);
    // show(f);
    // printf("\nEnter element you want to insert in queue : - ");
    // scanf("%d", &val);
    // enqueue(&f, &b, val);
    // show(f);
    // printf("\nEnter element you want to insert in queue : - ");
    // scanf("%d", &val);
    // enqueue(&f, &b, val);
    // show(f);
    // printf("\nEnter element you want to insert in queue : - ");
    // scanf("%d", &val);
    // enqueue(&f, &b, val);
    // show(f);
    // printf("\nEnter element you want to insert in queue : - ");
    // scanf("%d", &val);
    // enqueue(&f, &b, val);
    // show(f);

    //deleteing elemets in queue
    dequeue(&f);
    show(f);
    dequeue(&f);
    show(f);
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enqueue(&f, &b, val);
    show(f);
    dequeue(&f);
    show(f);
    dequeue(&f);
    // show(f);
    return 0;
}