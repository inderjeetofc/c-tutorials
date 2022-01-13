//wave problem
// #include <stdio.h>

// int main()
// {
//     int a[6] = {2, 4, 7, 8, 9, 10};
//     int size = 6;
//     for (int i = 0; i < size - 1; i = i + 2)
//     {
//         int temp = a[i];
//         a[i] = a[i + 1];
//         a[i + 1] = temp;
//     }
//     for (int i = 0; i < size; i++)
//         printf("\n%d", a[i]);
//     return 0;
// }

//--------------hold on to sum prob---------------
// #include <stdio.h>
// int a[7] = {65, 30, 7, 90, 1, 9, 8};
// int size = 7;
// int sum()
// {
//     int sum = 0;
//     for (int i = 0; i < size; i = i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (j != i)
//             {
//                 sum = a[i] + a[j];
//                 int c, d;
//                 for (c = 0; c < sum; c++)
//                 {
//                     d = sum - c;
//                     int count = 0;
//                     for (int k = 0; k < size; k++)
//                     {
//                         if (a[k] == d)
//                             count++;
//                         else if (a[k] == c)
//                             count++;
//                         if (count == 2)
//                             return 1;
//                     }
//                 }
//             }
//         }
//         return 0;
//     }
// }

// int main()
// {
//     printf("%d", sum());
//     return 0;
// }

//q Given a sorted array containing only 0s and 1s, find the transition point.
// #include <stdio.h>
// int arr[8] = {0, 0, 0, 0, 1, 1, 1, 1};
// int size = 8;
// int binarySearch(int low, int high, int num)
// {
//     int mid;
//     while (low <= high)
//     {
//         mid = (high + low) / 2;
//         if (num > arr[mid])
//         {
//             low = mid + 1;
//         }
//         else if (num < arr[mid] || arr[mid - 1] == num)
//         {
//             high = mid - 1;
//         }
//         else if (num == arr[mid] && arr[mid - 1] != num)
//             return mid;
//     }
//     return low;
// }
// int main()
// {
//     // binarySearch(0, size - 1,78);
//     int pos = binarySearch(0, size - 1, 1);
//     printf("\npos of transition is - %d", pos);
//     return 0;
// }

// q.Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order. using ductch quick sort
// #include <stdio.h>
// void dutchQuickSort(int *a, int n)
// {
//     int low, mid = 0;
//     int high = n - 1;
//     while (mid <= high)
//     {
//         if (a[mid] == 0)
//         {
//             int temp = a[mid];
//             a[mid] = a[low];
//             a[low] = temp;
//             low++;
//             mid++;
//         }
//         else if (a[mid] == 1)
//         {
//             mid++;
//         }
//         else
//         {
//             int temp = a[mid];
//             a[mid] = a[high];
//             a[high] = temp;
//             high--;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("\n%d", a[i]);
//     }
// }
// int main()
// {
//     int n = 15;
//     int arr[20] = {2, 0, 1, 1, 0, 0, 1, 2, 2, 0, 1, 1, 0, 0, 0, 2};
//     dutchQuickSort(arr, n);
//     return 0;
// }

// q.Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer.

// #include <stdio.h>
//time taking solution

// void rotateArr(int arr[], int d, int n)
// {
//     int j = d;
//     int pres, prev;
//     while (j != 0)
//     {
//     pres = arr[n - 1];
//     for (int i = n-1; i >= 0; i--)
//     {
//         int rot = (i - 1 + n) % n;
//         prev = arr[rot];
//         arr[rot] = pres;
//         pres = prev;
//     }
//     j--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d ", arr[i]);
//     }
// }

//storing starting elements in temp array
// void rotateArr(int arr[], int d, int n)
// {
//     int tempArr[d];
//     for (int i = 0; i < d; i++)
//     {
//         tempArr[i] = arr[i];
//     }
//     for (int i = d; i < n; i++)
//     {
//         arr[i - d] = arr[i];
//     }
//     for (int i = 0; i < d; i++)
//     {
//         arr[n - d + i] = tempArr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d ", arr[i]);
//     }
// }

//by rotating elements one by one
// void rotateArr(int arr[], int d, int n)
// {
//     while (d != 0)
//     {
//         int temp = arr[0];
//         for (int i = 0; i < n - 1; i++)
//         {
//             arr[i] = arr[i + 1];
//         }
//         arr[n - 1] = temp;
//         d--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d ", arr[i]);
//     }
// }

// array rotation juggling algo
// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }
// void rotateArr(int arr[], int d, int n)
// {
//     int k, temp, j;
//     for (int i = 0; i < gcd(n, d); i++)
//     {
//         j = i;
//         temp = arr[i];
//         while (1)
//         {
//             k = (j + k) % n;
//             if (k == i)
//                 break;
//             arr[j] = arr[k];
//             j = k;
//         }
//         arr[j] = temp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d ", arr[i]);
//     }
// }

// int main()
// {
//     int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     rotateArr(arr, 3, 10);
//     return 0;
// }

// q- Given two sorted arrays of distinct elements. There is only 1 difference between the arrays. First array has one element extra added in between. Find the index of the extra element.

// int findExtra(int a[], int b[], int n)
// {
//     int low = 0, high = n - 1, mid;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (a[mid] == b[mid])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return low;
// }
// #include <stdio.h>

// int main()
// {
//     int A[7] = {2, 4, 6, 8, 9, 10, 12};
//     int B[6] = {2, 4, 8, 9, 10, 12};
//     printf("index = %d", findExtra(A, B, 7));
//     return 0;
// }

// q.Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
// 1) All elements smaller than a come first.
// 2) All elements in range a to b come next.
// 3) All elements greater than b appear in the end.
// The individual elements of three sets can appear in any order. You are required to return the modified array.

// #include <stdio.h>
// void threeWayPartition(int arr[5], int n, int a, int b)
// {
//     int low=0, mid = 0, temp;
//     int high = n - 1;
//     while (mid <= high)
//     {
//         if (arr[mid] < a)
//         {
//             temp = arr[mid];
//             arr[mid] = arr[low];
//             arr[low] = temp;
//             low++;
//             mid++;
//         }
//         else if (a <= arr[mid] && arr[mid] <= b)
//         {

//             mid++;
//         }
//         else if (arr[mid] > b)
//         {
//             temp = arr[mid];
//             arr[mid] = arr[high];
//             arr[high] = temp;
//             high--;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d ", arr[i]);
//     }
// }
// int main()
// {
//     int arr[5] = {3, 3, 4, 0, 1};
//     threeWayPartition(arr, 5, 2, 4);
//     return 0;
// }

// q.Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array.
// Note: If the array is increasing then just print then last element will be the maximum value.

// #include <stdio.h>
// int findMaximum(int arr[], int n)
// {
//     int low = 0;
//     int high = n - 1;
//     int mid;
//     if (high == low + 1 && arr[high] >= arr[low])
//     {
//         return arr[high];
//     }
//     while (low <= high)
//     {
//         mid = (high + low) / 2;
//         if (arr[mid - 1] < arr[mid] && arr[mid + 1] > arr[mid])
//         {
//             low = mid + 1;
//         }
//         else if (arr[mid - 1] > arr[mid] && arr[mid + 1] < arr[mid])
//         {
//             high = mid - 1;
//         }
//         else if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
//             return arr[mid];
//         else
//             return arr[mid];
//     }
//     return arr[mid];
// }
// int main()
// {
//     int arr[] = {10, 10, 23};
//     int max = findMaximum(arr, 3);
//     printf("\n max = %d ", max);
//     return 0;
// }

// -------------------------------------------q.Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

// #include <stdio.h>
//time complexity is b[o] of n^2
// int findMax(int a[], int n, int max)
// {
//     for (int i = max + 1; i < n; i++)
//     {
//         if (a[i] > a[max])
//             max = i;
//     }
//     return max;
// }
// int *leaders(int a[], int n)
// {
//     int max = -1, j = 0;
//     int bArr[6];
//     int *b = &bArr[0];
//     while (max != n - 1)
//     {
//         max = findMax(a, n, max + 1);
//         bArr[j] = a[max];
//         j++;
//     }
//     bArr[j] = -1;
//     return b;
// }

//better time complexity b[o] = n
//iterate elements from right and update max

// int *leaders(int a[], int n)
// {
//     int bArr[9], j = 0;
//     int *b = &bArr[0];
//     int max;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (a[i] >= max)
//         {
//             max = a[i];
//             bArr[j] = max;
//             j++;
//         }
//     }
//     bArr[j] = -1;
//     return b;
// }
// int main()
// {
//     int a[] = {16, 17, 84, 4, 3, 5, 2, 8};
//     int *maxPtr = leaders(a, 9);
//     for (int i = 0; maxPtr[i] != -1; i++)
//     {
//         printf(" %d ", maxPtr[i]);
//     }
//     return 0;
// }

// q.Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
// Given an array, your task is to find the index of first Equilibrium point in the array.

// #include <stdio.h>
// int findEquilibrium(int A[], int n)
// {
//     //too long code,too many conditions
//     // int low = 0;
//     // int high = n - 1;
//     // int mid = (low + high) / 2;
//     // int sumL = 0, sumR = 0;
//     // for (int i = 0; i < mid; i++)
//     // {
//     //     sumL += A[i];
//     // }
//     // for (int i = mid + 1; i < n; i++)
//     // {
//     //     sumR += A[i];
//     // }
//     // if (sumL > sumR)
//     // {
//     //     while (mid != 0 && sumL > sumR)
//     //     {
//     //         int temp = mid;
//     //         mid = mid - 1;
//     //         sumL = sumL - A[mid];
//     //         sumR = sumR + temp;
//     //         if (sumL == sumR)
//     //             return mid;
//     //     }
//     //     return -1;
//     // }
//     // else if (sumR > sumL)
//     // {
//     //     while (mid != n - 1 && sumR > sumL)
//     //     {
//     //         int temp = A[mid];
//     //         mid = mid + 1;
//     //         sumR = sumR - A[mid];
//     //         sumL = sumL + temp;
//     //         if (sumL == sumR)
//     //             return mid;
//     //     }
//     //     return -1;
//     // }
//     // return mid;

//     //different logic adding all elements first then doing subtraction and addtiion
//     int sumL = 0, sumR = 0, mid = 0;
//     for (int i = 1; i < n; i++)
//     {
//         sumR += A[i];
//     }
//     while (sumL <= sumR)
//     {
//         if (sumL == sumR)
//             return mid;
//         sumL = sumL + A[mid];
//         mid++;
//         sumR = sumR - A[mid];
//     }
//     return -1;
// }
// int main()
// {

//     int arr[] = {2, 1, 3, 4, 2, 5, 5};
//     int equiPt = findEquilibrium(arr, 7);
//     printf("\n index is :- %d", equiPt);
//     return 0;
// }

// ----------------------------------------------q.Given a non-empty array of integers, find the top k elements which have the highest frequency in the array. If two numbers have the same frequency then the larger number should be given preference.

#include <stdio.h>
int *topK(int a[], int k)
{
    int b[10], j = 0;
    int *ptr = &b[0];
    int max = 0;
    for (int i = 1; i < 7; i++)
    {
        if (a[i] > a[max])
            max = i;
    }
    int auxi[max];
    for (int i = 0; i <= a[max]; i++)
    {
        auxi[i] = 0;
    }
    for (int i = 0; i <= a[max]; i++)
    {
        auxi[a[i]] = auxi[a[i]] + 1;
    }
    int size = a[max];
    int maxNum = a[max];
    // printf("amx %d", a[max]);
    // printf("mxnum %d", maxNum);
    // for (int i = 0; i <= size; i++)
    // {
    //     printf(" %d ", auxi[i]);
    // }
    while (j < k)
    {
        for (int i = size - 1; i >= 0; i--)
        {
            if (auxi[i] > auxi[maxNum])
                maxNum = i;
        }
        printf("\ni am maxnum %d", maxNum);
        b[j] = maxNum;
        auxi[maxNum] = 0;
        j++;
    }
    b[j] = -1;
    for (int i = 0; i <= size; i++)
    {
        printf(" %d ", auxi[i]);
    }
    for (int i = 0; b[i] != -1; i++)
    {
        printf(" %d ", b[i]);
    }
    return ptr;
}
int main()
{
    int arr[] = {2, 4, 4, 4, 3, 5, 5};
    int *ptr;
    ptr = topK(arr, 2);
    for (int i = 0; ptr[i] != -1; i++)
    {
        printf(" %d ", ptr[i]);
    }
    return 0;
}