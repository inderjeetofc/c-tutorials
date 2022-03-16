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

// // quick sort algo
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
// void swap(int i, int j)
// {
//     int temp = ptr->arr[i];
//     ptr->arr[i] = ptr->arr[j];
//     ptr->arr[j] = temp;
// }
// void quickSort(int low, int high)
// {
//     if (low < high)
//     {
//         int i = low + 1;
//         int j = high;
//         int pivot = low;
//         while (i < j)
//         {
//             // logic not working as this is increasing i and j simultaneously

//             // if (ptr->arr[i] >= ptr->arr[pivot] || ptr->arr[j] <= ptr->arr[pivot])
//             // {
//             //     swap(i, j);
//             // }
//             // i++;
//             // j--;

//             //working logic
//             while (ptr->arr[i] < ptr->arr[pivot])
//             {
//                 i++;
//             }
//             while (ptr->arr[j] > ptr->arr[pivot])
//             {
//                 j--;
//             }
//             if (i < j)
//             {

//                 swap(i, j);
//             }
//         }
//         swap(pivot, j);
//         quickSort(low, j - 1);
//         quickSort(j + 1, high);
//     }
// }
// int main()
// {
//     ptr = (array *)malloc(sizeof(array));
//     ptr->capacity = 50;
//     ptr->size = 9;
//     ptr->arr = (int *)malloc(ptr->size * sizeof(int));
//     enterArr();
//     quickSort(0, ptr->size - 1);
//     show();
//     return 0;
// }

// // mergesort algo
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
// void swap(int i, int j)
// {
//     int temp = ptr->arr[i];
//     ptr->arr[i] = ptr->arr[j];
//     ptr->arr[j] = temp;
// }
// void mergeArray(int *arr, int low, int high)
// {
//     for (int i = low; i <= high; i++)
//     {
//         ptr->arr[i] = arr[i];
//     }
// }
// void merge(int low, int mid, int high)
// {
//     int i = low;
//     int j = mid + 1;
//     int newArr[high - low + 1];
//     int k = i;
//     while (i <= mid && j <= high)
//     {
//         if (ptr->arr[i] < ptr->arr[j])
//         {
//             newArr[k] = ptr->arr[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             newArr[k] = ptr->arr[j];
//             k++;
//             j++;
//         }
//     }
//     while (i <= mid)
//     {
//         newArr[k] = ptr->arr[i];
//         k++;
//         i++;
//     }
//     while (j <= high)
//     {
//         newArr[k] = ptr->arr[j];
//         k++;
//         j++;
//     }
//     //debug code
//     // printf("\ni am k : - %d", k);
//     // printf("\nelements of k are - ");
//     // for (int i = 0; i <= high; i++)
//     // {
//     //     printf("\n%d", newArr[i]);
//     //     newArr[i] = 21;
//     // }
//     mergeArray(newArr, low, high);
// }
// void mergeSortAlgo(int low, int high)
// {
//     if (low < high)
//     {
//         int mid = (low + high) / 2;
//         // printf("\n i am low %d, i m mid %d", low, mid);
//         mergeSortAlgo(low, mid);
//         // printf("\n i am mid+1 %d, i m high %d", mid + 1, high);
//         mergeSortAlgo(mid + 1, high);
//         merge(low, mid, high);
//         // show();
//     }
// }
// int main()
// {
//     ptr = (array *)malloc(sizeof(array));
//     ptr->capacity = 50;
//     ptr->size = 5;
//     ptr->arr = (int *)malloc(ptr->size * sizeof(int));
//     enterArr();
//     mergeSortAlgo(0, ptr->size - 1);
//     show();
//     return 0;
// }
// Countsort algo
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
// void swap(int i, int j)
// {
//     int temp = ptr->arr[i];
//     ptr->arr[i] = ptr->arr[j];
//     ptr->arr[j] = temp;
// }
// int bubbleSort()
// {
//     int i;
//     for (i = 0; i < ptr->size - 1; i++)
//     {
//         if (ptr->arr[i + 1] < ptr->arr[i])
//         {
//             int temp = ptr->arr[i];
//             ptr->arr[i] = ptr->arr[i + 1];
//             ptr->arr[i + 1] = temp;
//         }
//     }
//     return ptr->arr[i];
// }
// void countSort()
// {
//     int max = bubbleSort();
//     int arr[max + 1];
//     //initialising the array with zero
//     for (int i = 0; i <= max; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = 0; i < ptr->size; i++)
//     {
//         arr[ptr->arr[i]]++;
//     }
//     int k = 0;
//     for (int i = 0; i <= max; i++)
//     {
//         int j = arr[i];
//         while (j != 0)
//         {
//             j--;
//             ptr->arr[k] = i;
//             k++;
//         }
//     }
// }
// int main()
// {
//     ptr = (array *)malloc(sizeof(array));
//     ptr->capacity = 50;
//     ptr->size = 5;
//     ptr->arr = (int *)malloc(ptr->size * sizeof(int));
//     enterArr();
//     countSort(0, ptr->size - 1);
//     show();
//     return 0;
// }

