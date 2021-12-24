#include <stdio.h>
#include <stdlib.h>
typedef struct linkedListNode
{
    int data;
    struct linkedListNode *next;
} node;
void showLinkedList(node *ptr)
{
    node *start = ptr;
    while (ptr->next != start)
    {
        printf("\n%d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n%d", ptr->data);

    // same by do while method
    // printf("\n%d", ptr->data);

    // do
    // {
    //     printf("\n%d", ptr->data);
    //     ptr = ptr->next;
    // } while (ptr != start);
}
node *insertLinkedListStart(node *ptr, node *dummy)
{
    //element is inserted in the end but as it is circular it will print first
    node *start = ptr;
    while (ptr->next != start)
    {
        ptr = ptr->next;
    }
    ptr->next = dummy;
    dummy->next = start;
    return (dummy);

    // not working cxonditions
    // dummy->next = start;
    // // dummy = start;
    // start = dummy;
    // return (start);
}
int main()
{
    int num = 87;
    node *head, *second, *third, *fourth, *dummy;
    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));
    dummy = (node *)malloc(sizeof(node));
    dummy->data = num;
    head->data = 17;
    head->next = second;
    second->data = 171;
    second->next = third;
    third->data = -17;
    third->next = fourth;
    fourth->data = 57;
    fourth->next = head;
    showLinkedList(head);
    head = insertLinkedListStart(head, dummy);
    printf("\nafter insertion :");
    showLinkedList(head);
    return 0;
}