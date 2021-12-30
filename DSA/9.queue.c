// q.linear queue

#include <stdio.h>
#include <stdlib.h>
typedef struct queueDataType
{
    int f;
    int b;
    int *arr;
    int size;
} queue;
int isEmpty(queue *ptr)
{
    if (ptr->f == ptr->b)
        return 1;
    else
        return 0;
}
int isFull(queue *ptr)
{
    if (ptr->b == ptr->size - 1)
        return 1;
    else
        return 0;
}
void enQueue(queue *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("\nQueue is full !");
    }
    else
    {
        ptr->b++;
        ptr->arr[ptr->b] = val;
    }
}
int deQueue(queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nCannot delete . Queue is empty");
        return -1;
    }
    else
    {
        ptr->f++;
        int temp = ptr->arr[ptr->f];
        return (temp);
    }
}
void show(queue *ptr)
{
    printf("\nElements of queue after operation is : - ");
    for (int i = ptr->f + 1; i <= ptr->b; i++)
    {
        printf("\n%d", ptr->arr[i]);
    }
}
int main()
{
    queue *q;
    q = (queue *)malloc(sizeof(queue));
    q->size = 5;
    q->f = q->b = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    int val;
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enQueue(q, val);
    show(q);
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enQueue(q, val);
    show(q);
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enQueue(q, val);
    show(q);
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enQueue(q, val);
    show(q);
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enQueue(q, val);
    show(q);
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enQueue(q, val);
    show(q);
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enQueue(q, val);
    show(q);

    //delete operations

    deQueue(q);
    show(q);
    deQueue(q);
    show(q);
    deQueue(q);
    show(q);
    deQueue(q);
    show(q);
    deQueue(q);
    show(q);
    deQueue(q);
    show(q);
    enQueue(q, val);
    show(q);

    return 0;
}

// // q.circular queue -- circular increment condition i=(i+1)%size
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct queueDataType
// {
//     int f;
//     int b;
//     int *arr;
//     int size;
// } queue;
// int isEmpty(queue *ptr)
// {
//     if (ptr->f == ptr->b)
//         return 1;
//     else
//         return 0;
// }
// int isFull(queue *ptr)
// {
//     if ((ptr->b + 1) % ptr->size == ptr->f)
//         return 1;
//     else
//         return 0;
// }
// void enQueue(queue *ptr, int val)
// {
//     if (isFull(ptr))
//     {
//         printf("\nQueue is full !");
//     }
//     else
//     {
//         ptr->b = (ptr->b + 1) % ptr->size;
//         ptr->arr[ptr->b] = val;
//     }
// }
// int deQueue(queue *ptr)
// {
//     if (isEmpty(ptr))
//     {
//         printf("\nCannot delete . Queue is empty");
//         return -1;
//     }
//     else
//     {
//         ptr->f = (ptr->f + 1) % ptr->size;
//         int temp = ptr->arr[ptr->f];
//         return (temp);
//     }
// }
// void show(queue *ptr)
// {
//     printf("\nElements of queue after operation is : - ");
//     for (int i = (ptr->f + 1) % ptr->size; i != (ptr->b + 1) % ptr->size; i = (i + 1) % ptr->size)
//     {
//         printf("\n%d", ptr->arr[i]);
//     }
// }
// int main()
// {
//     queue *q;
//     q = (queue *)malloc(sizeof(queue));
//     q->size = 6;
//     q->f = q->b = q->size - 1;
//     q->arr = (int *)malloc(q->size * sizeof(int));
//     int val;
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);

//     //delete operations

//     deQueue(q);
//     show(q);
//     deQueue(q);
//     show(q);
//     deQueue(q);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     deQueue(q);
//     show(q);
//     deQueue(q);
//     show(q);
//     deQueue(q);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);
//     printf("\nEnter element you want to insert in queue : - ");
//     scanf("%d", &val);
//     enQueue(q, val);
//     show(q);

//     return 0;
// }