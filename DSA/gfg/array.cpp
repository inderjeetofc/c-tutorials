// ques- reverse an array
// #include <iostream>
// using namespace std;
// void reverseArr(int arr[], int n)
// {
//     int start = 0, end = n - 1;
//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int arr[] = {1, 5, 8, 21, 53, 96};
//     int n = 6;
//     reverseArr(arr, n);
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     return 0;
// }

// ques remove duplicates from array
// #include <iostream>
// using namespace std;
// int removeDupes(int arr[], int n)
// {
//     // int temp[n];
//     // temp[0] = arr[0];
//     // int j = 0;
//     // for (int i = 1; i < n; i++)
//     // {
//     //     if (arr[i] != temp[j])
//     //     {
//     //         temp[j + 1] = arr[i];
//     //         j++;
//     //     }
//     // }
//     // for (int k = 0; k <= j; k++)
//     //     arr[k] = temp[k];
//     // return j + 1;

//     // without aux space
//     int pos = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] != arr[pos])
//         {
//             arr[pos + 1] = arr[i];
//             pos++;
//         }
//     }
//     return pos + 1;
// }
// int main()
// {
//     int arr[] = {1, 5, 5, 21, 53, 53};
//     int n = 6;
//     int N = removeDupes(arr, n);
//     for (int i = 0; i < N; i++)
//         cout << arr[i] << " ";
//     return 0;
// }
// ques max difference problem with j>i
// #include <bits/stdc++.h>
// using namespace std;
// int maxDiff(int arr[], int n)
// {
//     int minNum = arr[0];
//     int maxDiff = arr[1] - arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         minNum = min(arr[i], minNum);
//         maxDiff = max(maxDiff, arr[i] - maxDiff);
//     }
//     return maxDiff;
// }
// int main()
// {
//     int arr[] = {2, 3, 10, 6, 4, 8, 1};
//     cout << maxDiff(arr, 7);
//     return 0;
// }
// ques - count freq
// sol
// #include <bits/stdc++.h>
// using namespace std;
// void countFreq(int arr[], int n)
// {
//     int count = 0;
//     int num = arr[0];
//     for (int i = 0; i <= n; i++)
//     {
//         if (arr[i] == num)
//         {
//             count++;
//         }
//         else
//         {
//             cout << num << " " << count << endl;
//             count = 1;
//             num = arr[i];
//         }
//     }
// }
// int main()
// {
//     // int arr[] = {2, 2, 10, 10, 10, 8, 51, 51, 51, 51, 1};
//     int arr[] = {2,1,5,9};
//     countFreq(arr, 4);
//     return 0;
// }

// ques - stock buy sell prob
// sol
// #include <iostream>
// using namespace std;
// int buyStock(int arr[], int n)
// {
//     // faltu sol
//     //  int minP = arr[0], maxP = arr[0], profit = 0;
//     //  for (int i = 0; i <= n; i++)
//     //  {
//     //      if (arr[i] > maxP)
//     //      {
//     //          maxP = arr[i];
//     //      }
//     //      else if (arr[i] < maxP && maxP >= minP || i == n)
//     //      {
//     //          profit = profit + (maxP - minP);
//     //          minP = arr[i];
//     //          maxP = arr[i];
//     //      }
//     //      if (arr[i] < minP)
//     //      {
//     //          minP = arr[i];
//     //          maxP = minP;
//     //      }
//     //  }
//     int profit = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > arr[i - 1])
//             profit += (arr[i] - arr[i - 1]);
//     }
//     return profit;
// }
// int main()
// {
//     int arr[] = {1, 5, 3, 8, 12};
//     cout << buyStock(arr, 5) << endl;
//     return 0;
// }

// ques tapping rain water prob
// sol-
// #include <bits/stdc++.h>
// using namespace std;
// int tapRainWater(int arr[], int n)
// {
//     int lMax[n], rMax[n];
//     int maxL = arr[0], maxR = arr[n - 1];
//     for (int i = 1; i < n - 1; i++)
//     {
//         if (arr[i] > maxL)
//         {
//             maxL = arr[i];
//         }
//         if (arr[n - i - 1] > maxR)
//         {
//             maxR = arr[i];
//         }
//         lMax[i] = maxL;
//         rMax[n - i - 1] = maxR;
//     }
//     int stored = 0;
//     for (int i = 1; i < n - 1; i++)
//     {
//         stored = stored + min(lMax[i], rMax[i]) - arr[i];
//     }
//     return stored;
// }
// int main()
// {
//     int arr[] = {5, 0, 6, 2, 3};
//     cout << tapRainWater(arr, 5) << endl;
//     return 0;
// }
// ques- max cons 1's
// sol
// #include <bits/stdc++.h>
// using namespace std;
// int consOne(int arr[], int n)
// {
//     int maxSum = INT_MIN, sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // if (arr[i] == 1)
//         //     sum++;
//         // else
//         // {
//         //     maxSum = max(sum, maxSum);
//         //     sum = 0;
//         // }
//         // bettter approach
//         if (arr[i] == 0)
//             sum = 0;
//         else
//         {
//             sum++;
//             maxSum = max(sum, maxSum);
//         }
//     }
//     // if (maxSum != INT_MIN)
//     //     return maxSum;
//     // else
//     //     return sum;
//     return maxSum;
// }
// int main()
// {
//     int arr[] = {1, 1, 1, 1, 1};
//     cout << consOne(arr, 5) << endl;
//     return 0;
// }

// ques - max subarray sum
// sol- kadane's algo
// #include <bits/stdc++.h>
// using namespace std;
// int subArraySum(int arr[], int n)
// {
//     // int sum = 0;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     sum += arr[i];
//     // arr[i] = max(arr[i], sum);
//     //     sum = arr[i];
//     // }
//     // return *max_element(arr, arr + n);
//     // better sol
//     int maxSum = arr[0], res = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         maxSum = max(arr[i], maxSum + arr[i]);
//         res = max(maxSum, res);
//     }
//     return res;
// }
// int main()
// {
//     int arr[] = {-5, 4, 6, -3, 4, -1};
//     cout << subArraySum(arr, 6) << endl;
//     return 0;
// }

// ques-le of max subarray with alternate odd evene elements
// sol -
// #include <bits/stdc++.h>
// using namespace std;
// int maxLenSubArray(int arr[], int n)
// {
//     int maxLen = 1, len = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i - 1] % 2 == 0 && arr[i] % 2 != 0 || arr[i - 1] % 2 != 0 && arr[i] % 2 == 0)
//         {
//             len++;
//             maxLen = max(len, maxLen);
//         }
//         else
//             len = 1;
//     }
//     return maxLen;
// }
// int main()
// {
//     int arr[] = {10, 2, 4, 3, 5, 2, 7, 4, 4, 4};
//     cout << maxLenSubArray(arr, 10) << endl;
//     return 0;
// }
// ques - max sum of circular subArray
// sol
#include <bits/stdc++.h>
using namespace std;
int maxSumCircularSubArray(int arr[], int n)
{
    int maxSum = arr[0], minSum = arr[0], sum = arr[0], res = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxSum = max(arr[i], arr[i] + maxSum);
        res = max(res, maxSum);
        minSum = min(arr[i], minSum);
        sum = max(sum - minSum, sum);
    }
    return max(res, sum);
}
int main()
{
    int arr[] = {5, -2, 3, 4};
    cout << maxSumCircularSubArray(arr, 4) << endl;
    return 0;
}