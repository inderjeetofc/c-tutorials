//bubble sort code

// #include <stdio.h>
// #include <stdlib.h>
// typedef struct array
// {
//     int size;
//     int capacity;
//     int *arr;
//     ;
// } array;
// array *ptr;
// void enterArr()
// {
//     printf("\nEnter elements in the array : - ");
//     for (int i = 0; i < ptr->size; i++)
//     {
//         scanf("%d", &ptr->arr[i]);
//     }
// }
// void show()
// {
//     printf("\nArray after sorting is : - ");
//     for (int i = 0; i < ptr->size; i++)
//     {
//         printf("%d , ", ptr->arr[i]);
//     }
// }
// void bubbleSort()
// {
//     // for (int i = ptr->size; i >= ptr->size - 2; i--)
//     int isSorted = 0;
//     int length = ptr->size - 1;
//     int i = length;
//     for (int i = 0; i < ptr->size - 1; i++)
//     {
//         isSorted = 1; //Bubble sort adaptive
//         for (int j = 0; j < ptr->size - 1 - i; j++)
//         {
//             if (ptr->arr[j] > ptr->arr[j + 1])
//             {
//                 int temp = ptr->arr[j];
//                 ptr->arr[j] = ptr->arr[j + 1];
//                 ptr->arr[j + 1] = temp;
//                 isSorted = 0;
//             }
//         }
//         if (isSorted)
//             return;
//     }
//     // while (i > 1)
//     // {
//     //     isSorted = 1; //Bubble sort adaptive
//     //     for (int j = 0; j < i; j++)
//     //     {
//     //         if (ptr->arr[j] > ptr->arr[j + 1])
//     //         {
//     //             int temp = ptr->arr[j];
//     //             ptr->arr[j] = ptr->arr[j + 1];
//     //             ptr->arr[j + 1] = temp;
//     //             isSorted = 0;
//     //         }
//     //     }
//     //     if (isSorted)
//     //         return;
//     //     i--;
//     // }
// }
// int main()
// {
//     ptr = (array *)malloc(sizeof(array));
//     ptr->capacity = 50;
//     ptr->size = 8;
//     ptr->arr = (int *)malloc(ptr->size * sizeof(int));
//     enterArr();
//     bubbleSort();
//     show();
//     return 0;
// }

//insertion sort
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct array
// {
//     int size;
//     int capacity;
//     int *arr;
//     ;
// } array;
// array *ptr;
// void enterArr()
// {
//     printf("\nEnter elements in the array : - ");
//     for (int i = 0; i < ptr->size; i++)
//     {
//         scanf("%d", &ptr->arr[i]);
//     }
// }
// void show()
// {
//     printf("\nArray after sorting is : - ");
//     for (int i = 0; i < ptr->size; i++)
//     {
//         printf("%d , ", ptr->arr[i]);
//     }
// }
// void insertionSort()
// {
//     for (int i = 1; i < ptr->size; i++)
//     {
//         int j = i;
//         int count = 0;
//         int data = ptr->arr[i];
//         while (data < ptr->arr[j - 1] && j > 0)
//         {
//             count++;
//             ptr->arr[j] = ptr->arr[j - 1];
//             j--;
//         }
//         printf("\n i am running %d times", count);
//         ptr->arr[j] = data;
//         count = 0;
//     }
// }
// int main()
// {
//     ptr = (array *)malloc(sizeof(array));
//     ptr->capacity = 50;
//     ptr->size = 5;
//     ptr->arr = (int *)malloc(ptr->size * sizeof(int));
//     enterArr();
//     insertionSort();
//     show();
//     return 0;
// }

// //selection sort algo
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct array
// {
//     int size;
//     int capacity;
//     int *arr;
//     ;
// } array;
// array *ptr;
// void enterArr()
// {
//     printf("\nEnter elements in the array : - ");
//     for (int i = 0; i < ptr->size; i++)
//     {
//         scanf("%d", &ptr->arr[i]);
//     }
// }
// void show()
// {
//     printf("\nArray after sorting is : - ");
//     for (int i = 0; i < ptr->size; i++)
//     {
//         printf("%d , ", ptr->arr[i]);
//     }
// }
// void selectionSort()
// {
//     for (int i = 0; i < ptr->size - 1; i++)
//     {
//         // int min = ptr->arr[i];
//         int index = i;
//         int count = 0;
//         for (int j = i + 1; j < ptr->size; j++)
//         {
//             //storing min in a variable
//             // if (!(min < ptr->arr[j]))
//             // {
//             //     count++;
//             //     min = ptr->arr[j];
//             //     index = j;
//             // }

//             //smart way with just noticing index of min
//             if (ptr->arr[index] > ptr->arr[j])
//             {
//                 count++;
//                 index = j;
//             }
//         }
//         int temp = ptr->arr[index];
//         ptr->arr[index] = ptr->arr[i];
//         ptr->arr[i] = temp;
//         // ptr->arr[i] = min;
//         printf("\ni am running %d times", count);
//         count = 0;
//     }
// }
// int main()
// {
//     ptr = (array *)malloc(sizeof(array));
//     ptr->capacity = 50;
//     ptr->size = 5;
//     ptr->arr = (int *)malloc(ptr->size * sizeof(int));
//     enterArr();
//     selectionSort();
//     show();
//     return 0;
// }

// quick sort algo
#include <stdio.h>
#include <stdlib.h>
typedef struct array
{
    int size;
    int capacity;
    int *arr;
    ;
} array;
array *ptr;
void enterArr()
{
    printf("\nEnter elements in the array : - ");
    for (int i = 0; i < ptr->size; i++)
    {
        scanf("%d", &ptr->arr[i]);
    }
}
void show()
{
    printf("\nArray after sorting is : - ");
    for (int i = 0; i < ptr->size; i++)
    {
        printf("%d , ", ptr->arr[i]);
    }
}
void swap(int i, int j)
{
    int temp = ptr->arr[i];
    ptr->arr[i] = ptr->arr[j];
    ptr->arr[j] = temp;
}
void quickSort(int low, int high)
{
    if (low < high)
    {
        int i = low + 1;
        int j = high;
        int pivot = low;
        while (i < j)
        {
            // logic not working as this is increasing i and j simultaneously

            // if (ptr->arr[i] >= ptr->arr[pivot] || ptr->arr[j] <= ptr->arr[pivot])
            // {
            //     swap(i, j);
            // }
            // i++;
            // j--;

            //working logic
            while (ptr->arr[i] < ptr->arr[pivot])
            {
                i++;
            }
            while (ptr->arr[j] > ptr->arr[pivot])
            {
                j--;
            }
            if (i < j)
            {

                swap(i, j);
            }
        }
        swap(pivot, j);
        quickSort(low, j - 1);
        quickSort(j + 1, high);
    }
}
int main()
{
    ptr = (array *)malloc(sizeof(array));
    ptr->capacity = 50;
    ptr->size = 9;
    ptr->arr = (int *)malloc(ptr->size * sizeof(int));
    enterArr();
    quickSort(0, ptr->size - 1);
    show();
    return 0;
}