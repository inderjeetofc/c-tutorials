// ques find first occurence of element in sorted array
// sol - by binary search
// #include <iostream>
// using namespace std;
// int binSearch(int arr[], int n, int num)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int mid = (high + low) / 2;
//         if (arr[mid] < num)
//             low = mid + 1;
//         else if (arr[mid] > num)
//             high = mid - 1;
//         else
//         {
//             if (arr[mid - 1] != num || mid == 0)
//                 return mid;
//             else
//                 high = mid - 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 10, 10, 10, 20, 20, 40};
//     cout << binSearch(arr, 7, 10) << endl;
//     return 0;
// }
// ques find last occ of element
// sol - binary search
// #include <iostream>
// using namespace std;
// int binSearch(int arr[], int n, int num)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int mid = (high + low) / 2;
//         if (arr[mid] < num)
//             low = mid + 1;
//         else if (arr[mid] > num)
//             high = mid - 1;
//         else
//         {
//             if (arr[mid + 1] != num || mid == n - 1)
//                 return mid;
//             else
//                 low = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {1, 10, 10, 10, 20, 20, 40, 40};
//     cout << binSearch(arr, 8, 40) << endl;
//     return 0;
// }
// ques count occ in sorted array
// sol by binary search
// #include <iostream>
// using namespace std;
// int binSearch(int arr[], int n, int num)
// {
//     int low = 0, high = n - 1, count = 0;
//     while (low <= high)
//     {
//         int mid = (high + low) / 2;
//         if (arr[mid] < num)
//             low = mid + 1;
//         else if (arr[mid] > num)
//             high = mid - 1;
//         else
//         {
//             if (arr[mid - 1] != num || mid == 0)
//             {
//                 count++;
//                 mid++;
//                 while (arr[mid] == num)
//                 {
//                     count++;
//                     mid++;
//                 }
//                 return count;
//             }
//             else
//                 high = mid - 1;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int arr[] = {1, 10, 10, 10, 20, 20, 40, 40};
//     cout << binSearch(arr, 8, 11) << endl;
//     return 0;
// }
// ques - find sqrt of a num
// sol  by binary search
// #include <iostream>
// using namespace std;
// int sqrt(int num)
// {
//     int low = 0, high = num, ans = -1;
//     while (low <= high)
//     {
//         int mid = (high + low) / 2;
//         if (mid * mid == num)
//             return mid;
//         else if (mid * mid > num)
//             high = mid - 1;
//         else
//         {
//             low = mid + 1;
//             ans = mid;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     cout << sqrt(122) << endl;
//     return 0;
// }

// ques-searching eleemnt in infinite size arrau
//  ans-binary search by jumping two elements
// #include <iostream>
// using namespace std;
// int binSearch(int arr[], int num, int low, int high)
// {
//     while (low <= high)
//     {
//         int mid = (high + low) / 2;
//         if (arr[mid] == num)
//             return mid;
//         else if (arr[mid] > num)
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     return -1;
// }
// int searchInfiniteArr(int arr[], int num)
// {
//     if (arr[0] == num)
//         return 0;
//     int i = 1;
//     while (arr[i] < num)
//         i *= 2;
//     if (arr[i] == num)
//         return i;
//     int ans=binSearch(arr, num, i / 2 + 1, i - 1);
// }
// int main()
// {
// //above functions are the algo
// time complexity of sol is O(log(n))
//     return 0;
// }
// ques find max eleemtn in sorted rotated arra
// sol - bin search
// #include <iostream>
// using namespace std;
// int sortedRotatedSearch(int arr[], int n, int num)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == num)
//             return mid;
//         if (arr[low] < arr[mid])
//         {
//             if (num >= arr[low] && num < arr[mid])
//                 high = mid - 1;
//             else
//                 low = mid + 1;
//         }
//         else
//         {
//             if (num > arr[mid] && num <= arr[high])
//                 low = mid + 1;
//             else
//                 high = mid - 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {20, 30, 35, 36, 7, 12, 14};
//     cout << sortedRotatedSearch(arr, 7, 7) << endl;
//     return 0;
// }

// ques find and display any one peak element of array
// sol - by binary search . note every array would have a peak element that is the idea
// #include <iostream>
// using namespace std;
// int peakElement(int arr[], int n)
// {
//     int low = 0, high = n - 1;
//     if (arr[low] > arr[low + 1])
//         return arr[low];
//     if (arr[high] > arr[high - 1])
//         return arr[high];
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid - 1] > arr[mid])
//         {
//             high = mid - 1;
//         }
//         else if (arr[mid + 1] > arr[mid])
//         {
//             low = mid + 1;
//         }
//         else
//             return arr[mid];
//     }
// }
// int main()
// {
//     int arr[] = {5, 20, 10, 30, 50, 55, 60};
//     cout << peakElement(arr, 7) << endl;
//     return 0;
// }
// ques median of two sorted arrays
// sol
#include <bits/stdc++.h>
using namespace std;
int median(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0, med1, med2, temp, count = -1;
    med1 = (m + n) / 2;
    while (i < n || j < m)
    {
        if (arr1[i] > arr2[j])
        {
            temp = arr1[i];
            count++;
            i++;
        }
        else if (arr1[i] < arr2[j])
        {
            temp = arr2[j];
            count++;
            j++;
        }
        if (count == med1)
        {
            // if ((n + m) % 2 == 0)
            return temp;
        }
    }
    if (j >= n)
    {
        while (i < n)
        {
            count++;
            temp = arr1[i];
            i++;
            if (count == med1)
            {
                // if ((n + m) % 2 == 0)
                return temp;
            }
        }
    }
    else
    {
        while (j < n)
        {
            count++;
            temp = arr2[j];
            j++;
            if (count == med1)
            {
                // if ((n + m) % 2 == 0)
                return temp;
            }
        }
    }
}
int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {5, 15, 25, 45, 35};
    cout << median(arr1, arr2, 5, 5) << endl;
    return 0;
}