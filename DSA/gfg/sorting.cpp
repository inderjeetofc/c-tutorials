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
// #include <iostream>
// using namespace std;
// void unionArr(int arr1[], int arr2[], int n, int m)
// {
//     int i = 0, j = 0;
//     while (i < n && j < m)
//     {
//         if (i > 0 && arr1[i] == arr1[i - 1])
//         {
//             i++;
//             continue;
//         }
//         if (j > 0 && arr2[j] == arr2[j - 1])
//         {
//             j++;
//             continue;
//         }
//         if (arr1[i] < arr2[j])
//         {
//             cout << arr1[i] << " ";
//             i++;
//         }
//         else if (arr1[i] > arr2[j])
//         {
//             cout << arr2[j] << " ";
//             j++;
//         }
//         else
//         {
//             cout << arr1[i] << " ";
//             i++;
//             j++;
//         }
//     }
//     while (i < n)
//     {
//         if (i > 0 && arr1[i] != arr1[i - 1])
//             cout << arr1[i] << " ";
//         i++;
//     }
//     while (j < m)
//     {
//         if (j > 0 && arr2[j] != arr2[j - 1])
//             cout << arr2[j] << " ";
//         j++;
//     }
// }
// int main()
// {
//     int arr1[] = {4, 5, 6, 7};
//     int arr2[] = {4, 4, 7, 7};
//     unionArr(arr1, arr2, 4, 4);
//     return 0;
// }

// ques count inversions in array - i.e arr[i]>arr[j] &&i<j
// sol - using merge sort we count all such cases while sorting the array
// #include <iostream>
// using namespace std;
// int mergeConquer(int arr[], int low, int mid, int high)
// {
//     int i = low, j = mid + 1, k = low, res = 0;
//     int temp[high - low + 1];
//     while (i <= mid && j <= high)
//     {
//         if (arr[i] <= arr[j])
//         {
//             temp[k] = arr[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             temp[k] = arr[j];
//             res = res + (high + 1 - i);
//             j++;
//             k++;
//         }
//     }
//     while (i <= mid)
//     {
//         temp[k] = arr[i];
//         i++;
//         k++;
//     }
//     while (j <= high)
//     {
//         temp[k] = arr[j];
//         j++;
//         k++;
//     }
//     // copying elements frm temp array to original array
//     for (int a = low; a < high + 1; a++)
//         arr[a] = temp[a];
//     return res;
// }
// int mergeDivide(int arr[], int low, int high)
// {
//     int res;
//     if (low < high)
//     {
//         int mid = low + (high - low) / 2;
//         mergeDivide(arr, low, mid);
//         mergeDivide(arr, mid + 1, high);
//         return mergeConquer(arr, low, mid, high);
//     }
// }
// int countInversion(int arr[], int n)
// {
//     return mergeDivide(arr, 0, n - 1);
// }
// int main()
// {
//     int arr[] = {40, 30, 20, 10, 5};
//     cout << countInversion(arr, 5) << endl;
//     // sorted array;
//     for (int i = 0; i < 5; i++)
//         cout << arr[i] << " ";
//     return 0;
// }

// partition algo-1

// ques - naive partition-> to find correct position of an element in an unsorted array.that element is known as pivot
// sol - quick sort partition
// note - naive partition is stable partition, O(n),O(n extra space ,  requires 3 array traversals)
// #include <iostream>
// using namespace std;
// int naivePartition(int arr[], int n, int index)
// {
//     int low = 0, high = n - 1, pivot = index, k = 0, res;
//     int temp[high - low + 1];
//     for (int i = low; i <= high; i++)
//     {
//         if (arr[i] < arr[pivot])
//         {
//             temp[k] = arr[i];
//             k++;
//         }
//     }
//     for (int i = low; i <= high; i++)
//     {
//         if (arr[i] == arr[pivot])
//         {
//             temp[k] = arr[i];
//             k++;
//         }
//     }
//     res = low + k - 1;
//     return res;
// }
// int main()
// {
//     int arr[] = {3, 7, 6, 12, 10, 7};
//     cout << naivePartition(arr, 6, 5) << endl;
//     return 0;
// }

// partition algo-2
//  lomuto partition -  to find correct position of pivot element. by default we consider last position of pivot
//- this works in one traversal of array i big O(N) time complexity and O(1) space,this is a not stable algo;
// this algo return index of pivot in sorted array
//  #include <bits/stdc++.h>
//  using namespace std;
//  int lomuto(int arr[], int n)
//  {
//      int pivot = n - 1, i = 0, j = 0;
//      for (j = 0; j < pivot; j++)
//      {
//          if (arr[j] < arr[pivot])
//          {
//              swap(arr[i], arr[j]);
//              i++;
//          }
//      }
//      swap(arr[pivot], arr[i]);
//      return i;
//  }
//  int main()
//  {
//      int arr[] = {10, 30, 80, 90, 40, 5, 70};
//      cout << lomuto(arr, 7) << endl;
//      return 0;
//  }

// partition algo-3
//  hoars partition -> this is the partition we used in quick sort analysis
//  this algo is better than lomuto partition as it takes lesser comparisions. otherwise all properties are same
//    p  i>p        j<p
//    | |           |
//   {4,2,8,9,1,56,96}

// ques- quick sort with lomuto partition
// sol
// #include <bits/stdc++.h>
// using namespace std;
// void quickSortLomuto(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int pivot = high, i = low;
//         for (int j = low; j < pivot; j++)
//         {
//             if (arr[j] < arr[pivot])
//             {
//                 swap(arr[j], arr[i]);
//                 i++;
//             }
//         }
//         swap(arr[pivot], arr[i]);
//         quickSortLomuto(arr, low, i - 1);
//         quickSortLomuto(arr, i + 1, high);
//     }
//     return;
// }
// int main()
// {
//     int arr[] = {8, 4, 7, 9, 3, 10, 5};
//     int n = 7;
//     quickSortLomuto(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     return 0;
// }
// ques- quick sort with hoar partition
// sol
// #include <bits/stdc++.h>
// using namespace std;
// void quickSortHoars(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int pivot = low, i = low + 1, j = high;
//         while (i < j)
//         {
//             while (arr[i] < arr[pivot])
//                 i++;
//             while (arr[j] > arr[pivot])
//                 j--;
//             if (i < j)
//                 swap(arr[i], arr[j]);
//         }
//         swap(arr[pivot], arr[j]);
//         quickSortHoars(arr, low, j - 1);
//         quickSortHoars(arr, j + 1, high);
//     }
//     return;
// }
// int main()
// {
//     int arr[] = {8, 4, 7, 9, 3, 10, 5};
//     int n = 7;
//     quickSortHoars(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     return 0;
// }

// ques find kth smallest element
// sol - lamuto partition . kth smalest means k-1 pos in sorted array
// name of this algo is quick select algo
// #include <bits/stdc++.h>
// using namespace std;
// int kthSmallestElement(int arr[], int n, int k)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int i = low, j = low, pivot = high;
//         while (j < pivot)
//         {
//             if (arr[j] < arr[pivot])
//             {
//                 swap(arr[i], arr[j]);
//                 i++;
//                 j++;
//             }
//             else
//                 j++;
//         }
//         swap(arr[i], arr[pivot]);
//         if (i == k - 1)
//             return arr[i];
//         else if (i < k - 1)
//             low = i + 1;
//         else
//             high = i - 1;
//     }
// }
// int main()
// {
//     int arr[] = {10, 4, 5, 8, 11, 6, 26};
//     cout << kthSmallestElement(arr, 7, 4) << endl;
//     return 0;
// }

// choclate distribution prob
// sol
// #include <bits/stdc++.h>
// using namespace std;
// int minDiff(int arr[], int n, int k)
// {
//     sort(arr, arr + n);
//     int min = INT_MAX;
//     for (int i = k - 1; i < n; i++)
//     {
//         int j = i - k + 1;
//         if (arr[i] - arr[j] < min)
//             min = arr[i] - arr[j];
//     }
//     return min;
// }
// int main()
// {
//     int arr[] = {7, 3, 2, 4, 9, 12, 56};
//     cout << minDiff(arr, 7, 6) << endl;
//     return 0;
// }