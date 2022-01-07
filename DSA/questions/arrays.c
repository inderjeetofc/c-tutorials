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

#include <stdio.h>
int arr[8] = {0, 0, 0, 0, 0, 1, 1, 1};
int size = 8;
int binarySearch(int low, int high)
{
    int mid;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}
int main()
{
    binarySearch(0, size - 1);
    int pos = binarySearch(0, size - 1);
    printf("\n%d", pos);
    return 0;
}