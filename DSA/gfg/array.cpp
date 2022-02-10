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