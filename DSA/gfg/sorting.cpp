// ques merge two sorted
// sol - merge two arrays algo
// #include <iostream>
// using namespace std;
// int *merge(int arr1[], int arr2[], int n, int m)
// {
//     int i = 0, j = 0, k = 0;
//     int temp[m + n];
//     while (i < n && j < m)
//     {
//         if (arr1[i] <= arr2[j])
//         {
//             temp[k++] = arr1[i++];
//         }
//         else
//         {
//             temp[k++] = arr2[j++];
//         }
//     }
//     while (j < m)
//     {
//         temp[k++] = arr2[j++];
//     }
//     while (i < n)
//     {
//         temp[k++] = arr1[i++];
//     }

//     int *ptr = &temp[0];
//     for (int i = 0; i < (m + n); i++)
//         cout << temp[i] << " ";
//     cout << endl;
//     return ptr;
// }
// int main()
// {
//     int arr1[] = {10, 15, 20};
//     int arr2[] = {5, 6, 6, 15};
//     int *ptr = merge(arr1, arr2, 3, 4);
//     for (int i = 0; i < 7; i++)
//         cout << *(ptr + i) << " ";
//     return 0;
// }

// ques print intersection of two arrays
// sol
// #include <iostream>
// using namespace std;
// void intersection(int arr1[], int arr2[], int n, int m)
// {
//     int i = 0, j = 0, temp = -1;
//     if (arr1[n - 1] < arr2[0] || arr2[m - 1] < arr1[0])
//     {
//         cout << temp << " ";
//         return;
//     }
//     while (i < n && j < m)
//     {
//         if (arr1[i] == arr2[j] && arr1[i] != temp)
//         {
//             temp = arr1[i];
//             cout << temp << " ";
//             i++;
//             j++;
//         }
//         else if (arr1[i] < arr2[j])
//             i++;
//         else
//             j++;
//     }
// }
// int main()
// {
//     int arr1[] = {10, 10};
//     int arr2[] = {10, 20};
//     intersection(arr1, arr2, 2, 2);
//     return 0;
// }

//  ques print union of two arrays
// sol
#include <iostream>
using namespace std;
void unionArr(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            if (arr1[i] != arr1[i - 1])
                cout << arr1[i] << " ";
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (arr2[j] != arr2[j - 1])
                cout << arr2[j] << " ";
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    while (i < n)
    {
        if (arr1[i] != arr1[i - 1])
            cout << arr1[i] << " ";
        i++;
    }
    while (j < m)
    {
        if (arr2[j] != arr2[j - 1])
            cout << arr2[j] << " ";
        j++;
    }
}
int main()
{
    int arr1[] = {4, 5};
    int arr2[] = {4, 4};
    unionArr(arr1, arr2, 2, 2);
    return 0;
}