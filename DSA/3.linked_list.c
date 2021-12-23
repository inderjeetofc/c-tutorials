#include <stdio.h>
#include <stdlib.h>
typedef struct LinkedListNode
{
    int data;
    struct LinkedListNode *next;
} node;
void linkedListTraverse(node *ptr)
{
    int i = 1;
    while (ptr != NULL)
    {
        printf("\ndata at %d is: %d", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}
void linkedListInsertionMiddle(node *ptr, node *dummy, int pos)
{
    for (int i = 1; i < pos - 1; i++)
    {
        ptr = ptr->next;
    }
    if (ptr->next == NULL) //Insertion in end
    {
        dummy->next = NULL;
        ptr->next = dummy;
    }
    else //Insertion in middle
    {
        dummy->next = ptr->next;
        ptr->next = dummy;
    }
}
node *linkedListInsertionStart(node *ptr, node *dummy)
{

    dummy->next = ptr;
    ptr = dummy;
    return (ptr);
}
node *linkedListDeleteStart(node *ptr)
{
    node *temp = ptr;
    ptr = ptr->next;
    free(temp);
    return (ptr);
}
void linkedListDeleteNode(node *ptr, int pos)
{
    node *temp;
    for (int i = 1; i < pos - 1; i++)
    {
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = ptr->next->next;
    free(temp);
}
node *deleteWithVal(node *ptr, int val)
{
    //By using two pointers
    node *start = ptr, *qtr;
    qtr = ptr->next;
    if (ptr->data == val)
    {
        start = ptr->next;
        return (start);
    }
    while (qtr->data != val && qtr->next != NULL)
    {
        ptr = ptr->next;
        qtr = qtr->next;
    }
    if (qtr->data == val)
    {
        ptr->next = qtr->next;
        free(qtr);
    }  
    return (start);



    //by using pos variable and other delete functions


    // int pos = 1;
    // while (ptr->data != val)
    // {
    //     ptr = ptr->next;
    //     pos++;
    // }
    // if (pos == 1)
    // {
    //     start = linkedListDeleteStart(start);
    //     return (start);
    // }
    // else
    //     linkedListDeleteNode(start, pos);
    // return start;
}
int main()
{
    int pos;
    char check;
    node *head, *second, *third, *fourth, *dummy;
    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));
    dummy = (node *)malloc(sizeof(node));

    head->data = 17;
    head->next = second; //not &second as memory is allocated dynamically
    second->data = 897;
    second->next = third;
    third->data = -17;
    third->next = fourth;
    fourth->data = 14;
    fourth->next = NULL;
    printf("\nBefore insertion : -");
    linkedListTraverse(head);
    printf("\nDo you want to insert (i) or delete (d) element?");
    scanf("%c", &check);
    if (check == 'i')
    {
        printf("\nWhere do you want to enter element ? - ");
        scanf("%d", &pos);
        printf("\nEnter element you want to insert ? - ");
        scanf("%d", &dummy->data);
        if (pos == 1)
        {
            head = linkedListInsertionStart(head, dummy);
        }
        else
        {
            linkedListInsertionMiddle(head, dummy, pos);
        }
        printf("\nAfter insertion : -");
        linkedListTraverse(head);
    }
    else if (check == 'd')
    {
        int val;
        // printf("\nWhere do you want to delete element ? - ");
        // scanf("%d", &pos);
        // if (pos == 1)
        // {
        //     // head = linkedListDeleteStart(head);
        //     linkedListDeleteStart(&head);
        // }
        // else if(pos!=1)
        // {
        //     linkedListDeleteNode(head, pos);
        // }
        // printf("\nAfter Deletion : -");
        // linkedListTraverse(head);
        printf("\nEnter value you want to delete :");
        scanf("%d", &val);
        head = deleteWithVal(head, val);
        printf("\nAfter Deletion : -");
        linkedListTraverse(head);
    }
    return 0;
}