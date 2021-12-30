#include <stdio.h>
#include <stdlib.h>
typedef struct queueDataType
{
    int f;
    int b;
    int *arr;
    int size;
} DEqueue;
DEqueue *q;
int isFull()
{
    if (q->b >= q->size - 1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if (q->b == q->f)
        return 1;
    else
        return 0;
}
void enqueueF(int val)
{
    if (isFull())
        printf("\nDEqueue is full !");
    else
    {
        if (q->f != -1)
        {
            q->arr[q->f] = val;
            q->f--;
        }
        else
            printf("\nFront index is -1 insert from rear end pls !");
    }
}
void enqueueB(int val)
{
    if (isFull())
        printf("\nDEqueue is full !");
    else
    {
        q->b++;
        q->arr[q->b] = val;
    }
}
int dequeueF()
{
    if (isEmpty())
    {
        printf("\nDEqueue is empty!");
        return -1;
    }
    else
    {
        int temp = q->arr[q->f];
        q->f++;
        return (temp);
    }
}
int dequeueB()
{
    if (isEmpty())
    {
        printf("\nDEqueue is empty!");
        return -1;
    }
    else
    {
        int temp = q->arr[q->b];
        q->b--;
        return (temp);
    }
}
void show()
{
    printf("\nElements of queue are : - ");
    for (int i = q->f + 1; i <= q->b; i++)
    {
        printf("\n%d", q->arr[i]);
    }
}
int main()
{
    q = (DEqueue *)malloc(sizeof(DEqueue));
    q->size = 6;
    q->f = q->b = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    int val;
    dequeueB();
    dequeueF();
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enqueueB(val);
    show();
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enqueueB(val);
    show();
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enqueueB(val);
    show();
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enqueueB(val);
    show();
    dequeueB();
    show();
    dequeueB();
    show();
    dequeueF();
    show();
    dequeueF();
    show();
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enqueueF(val);
    show();
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enqueueF(val);
    show();
    printf("\nEnter element you want to insert in queue : - ");
    scanf("%d", &val);
    enqueueB(val);
    show();
    // dequeueF();
    // show();
    // dequeueF();
    // show();
    // dequeueF();
    // show();
    // printf("\nEnter element you want to insert in queue : - ");
    // scanf("%d", &val);
    // enqueueF(val);
    // show();
    return 0;
}