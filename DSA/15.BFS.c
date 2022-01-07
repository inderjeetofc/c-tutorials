#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int size;
    int f;
    int b;
    int *arr;
} queue;
queue *q;
int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int adjArr[7][7] = {{0, 1, 1, 1, 0, 0, 0},
                    {1, 0, 1, 0, 0, 0, 0},
                    {1, 1, 0, 1, 0, 0, 0},
                    {1, 0, 1, 0, 1, 0, 0},
                    {0, 0, 1, 1, 0, 1, 1},
                    {0, 0, 0, 0, 1, 0, 0},
                    {0, 0, 0, 0, 1, 0, 0}};
int isFull()
{
    if (q->b >= q->size - 1)
        return 1;
    return 0;
}
int isEmpty()
{
    if (q->b == q->f)
        return 1;
    return 0;
}
void enqueue(int num)
{
    if (!isFull())
    {
        q->b++;
        q->arr[q->b] = num;
    }
    else
        printf("\nQueue is full ! Insertion failed");
}
int dequeue()
{
    if (!isEmpty())
    {
        q->f++;
        return (q->arr[q->f]);
    }
    else
        printf("\nQueue is empty ! deletion failed !");
    return 0;
}
void show()
{
    for (int i = q->f + 1; i <= q->b; i++)
    {
        printf("\n%d", q->arr[i]);
    }
}
// DFS ALGO
void DFS(int i)
{
    printf("\n%d", i);
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (adjArr[i][j] == 1 && visited[j] == 0)
        {
            DFS(j);
        }
    }
}
int main()
{
    //BFS implementation

    // q = (queue *)malloc(sizeof(queue));
    // q->size = 10;
    // q->f = q->b = -1;
    // q->arr = (int *)malloc(sizeof(int));

    // int i = 4;
    // visited[i] = 1;
    // enqueue(i);
    // printf("\norigin - %d", i);
    //BFS ALGO
    // while (!isEmpty())
    // {
    //     int node = dequeue();
    //     for (int j = 0; j < 7; j++)
    //     {
    //         if (adjArr[node][j] == 1 && visited[j] == 0)
    //         {
    //             printf("\n%d", j);
    //             visited[j] = 1;
    //             enqueue(j);
    //         }
    //     }
    // }

    //DFS implementation
    DFS(0);
    // show();
    return 0;
}