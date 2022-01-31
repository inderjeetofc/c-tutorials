//q.Given an unsorted array arr[] of size N, rotate it by D elements (Anti - clockwise).
//answer - faltu code not working

// #include <iostream>
// using namespace std;
// template <class t>
// class rotateArray
// {
//     int n;
//     t arr[];

// public:
//     void getElement(int size)
//     {
//         n = size;
//         for (int i = 0; i < size; i++)
//         {
//             cin >> arr[i];
//         }
//     }
//     void rotate(int d, int size)
//     {
//         n = size;
//         int prev, suc;
//         for (int i = 0; i < n; i++)
//         {
//             prev = arr[n + i - d];
//             arr[i] = suc;
//             arr[n + i - d] = arr[i];
//             suc = prev;
//         }
//     }
//     void display(int size)
//     {
//         n = size;
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     int T, N, D;
//     cin >> T >> N >> D;
//     rotateArray<int> obj;
//     obj.getElement(N);
//     obj.rotate(D, N);
//     obj.display(N);
//     return 0;
// }

//above problem solved by creating a temp array
// #include <iostream>
// using namespace std;
// void getElement(int *ptr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cin >> ptr[i];
//     }
// }
// void rotate(int *ptr, int size, int d)
// {
//     int temp[1000000];
//     for (int i = 0; i < d; i++)
//     {
//         temp[i] = ptr[i];
//     }
//     for (int i = d; i < size; i++)
//     {
//         ptr[i - d] = ptr[i];
//     }
//     for (int i = 0; i < d; i++)
//     {
//         ptr[size - d + i] = temp[i];
//     }
// }
// void display(int *ptr, int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << ptr[i] << " ";
//     cout << endl;
// }
// int main()
// {
//     int T, N, D;
//     int arr[1000000];
//     cin >> T;
//     while (T--)
//     {
//         cin >> N >> D;
//         getElement(arr, N);
//         rotate(arr, N, D);
//         display(arr, N);
//     }
//     return 0;
// }

//above problem solving by internal rotation
// #include <bits/stdc++.h>
// using namespace std;
// void getElement(int *ptr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cin >> ptr[i];
//     }
// }
// void rotate(int (&arr)[1000000], int low, int high)
// {
//     while (low < high)
//     {
//         int temp = arr[low];
//         arr[low] = arr[high];
//         arr[high] = temp;
//         low++;
//         high--;
//     }
// }
// void display(int *ptr, int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << ptr[i] << " ";
//     cout << endl;
// }
// int main()
// {
//     int T, N, D;
//     cin >> T;
//     int arr[1000000];
//     while (T--)
//     {
//         cin >> N >> D;
//         getElement(arr, N);
//         // rotate(arr, 0, D - 1);
//         // rotate(arr, D, N - 1);
//         // rotate(arr, 0, N - 1);

//         //using STL
//         reverse(arr, arr + D);
//         reverse(arr + D, arr + N);
//         reverse(arr, arr + N);
//         display(arr, N);
//     }
//     return 0;
// }

// q - Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.
//time complexity = log(N)
// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[7] = {10, 20, 30, 30, 30, 40, 50};
//     int *ptr = lower_bound(arr, arr + 7, 30);
//     int *htr = upper_bound(ptr, arr + 7, 30);
//     cout << ptr - arr << endl;
//     cout << ptr << endl;
//     cout << htr - arr << endl;
//     cout << htr << endl;
//     cout << htr - ptr;
//     return 0;
// }

//q.You are given an integer N. You need to convert all zeroes of N to 5. (by converting to string)

// #include <bits/stdc++.h>
// using namespace std;
// int convertFive(int n)
// {
//     string s = to_string(n);
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '5';
//         }
//     }
//     n = stoi(s);
//     return n;
// }
// int main()
// {
//     cout << "num is = " << convertFive(1004);
//     return 0;
// }

//q above ques by recursion
// #include <iostream>
// using namespace std;
// int convertFive(int n)
// {
//     if (n == 0)
//         return 0;
//     int digit = n % 10;
//     if (digit == 0)
//         digit = 5;
//     int num = convertFive(n / 10) * 10 + digit;
//     return num;
// }
// int main()
// {
//     int n = 1000008;
//     if (n == 0)
//     {
//         n = 5;
//         cout << "num is = " << n;
//     }
//     else
//         cout << "num is = " << convertFive(n);
//     return 0;
// }

//q-Given a sorted array consisting 0’s and 1’s. The task is to find the index of first ‘1’ in the given array.
// sol - 1 - binary search
// 2 - lower_bound stl

// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int low, int high)
// {
//     while (low <= high)
//     {
//         int mid = (high + low) / 2;
//         if (arr[mid] == 1 && arr[mid - 1] == 0)
//             return mid;
//         else if (arr[mid] == 1)
//             high = mid - 1;
//         else if (arr[mid] == 0)
//             low = mid + 1;
//         else
//             return -1;
//     }
// }
// int main()
// {
//     int size = 7;
//     int arr[] = {0, 0, 0, 0, 0, 0, 1};
//     // int *arr = new int[size];
//     // cin>>size;
//     cout << binarySearch(arr, 0, size - 1);
//     return 0;
// }

//q -Convert array into Zig-Zag fashion - read editorial of this problem
// q- Given an array of N positive integers where all numbers occur even number of times except one number which occurs odd number of times. Find the exceptional number.
//sol - xor of all element should give the number that appears odd no.of times

//****** impo ques - Find triplets with zero sum
// sol - 1 - three loops o(n^3)
// 2 - hashing method - nahi ata abhi
// 3 -two pointer method on sorted array

// #include <bits/stdc++.h>
// using namespace std;
// bool findTriplets(int arr[], int n)
// {
//     int sum = 0;
//     sort(arr, arr + n);
//     for (int i = 0; i < n - 1; i++)
//     {
//         int low = i + 1;
//         int high = n - 1;
//         while (low < high)
//         {
//             sum = arr[i] + arr[low] + arr[high];
//             if (sum == 0)
//             {
//                 return 1;
//             }
//             else if (sum < 0)
//                 low++;
//             else
//                 high--;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     // int arr[7] = {4, -16, 43, 4, 7, -36, 18};
//     int arr[6] = {5, 0, -1, 2, -3, 1};
//     cout << "output is = " << findTriplets(arr, 6);
//     return 0;
// }

//q-Given an array of distinct elements. Find the third largest element in it.
// Suppose you have A[] = {1, 2, 3, 4, 5, 6, 7}, its output will be 5 because it is the 3 largest element in the array A.
// #include<bits/stdc++.h>
// using namespace std;

// int thirdLargest(int a[], int n)
//     {
//         if(n<3)
//                 return -1;
//     int max1,max2,max3;
//     max1=max(a[0],a[1]);
//     max2=min(a[0],a[1]);
//     max3=INT_MIN;
//     // cout<<max1<<max2;
//     for(int i=2;i<n;i++){
//         if(a[i]>max3){
//             max3=a[i];
//         }
//         if(a[i]>max2)
//         {
//             max3=max2;
//             max2=a[i];
//         }
//         if(a[i]>max1){
//             max2=max1;
//             max1=a[i];
//         }
//     }
//     return max3;
// }
// int main(){
//     int arr[7]={-1,0,65,89,4,110,85};
//     cout<<"third largest is = "<<thirdLargest(arr,7);
//     return 0;
// }

//q- Sort in specific order ----------------------------------------pending
//sol make separate odd and even arrays.//following is just the function

// #include <bits/stdc++.h>
// using namespace std;

// void sortIt(long long arr[], long long n)
// {
//     long long tempO[n], tempE[n], o = 0, e = 0;
//     for (long long i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             tempE[e++] = arr[i];
//         }
//         else
//         {
//             tempO[o++] = arr[i];
//         }
//     }
//     sort(tempO, tempO + o, greater<int>());
//     sort(tempE, tempE + e);
//     for (long long i = 0; i < n; i++)
//     {
//         if (i < o)
//             arr[i] = tempO[i];
//         else
//             arr[i] = tempE[i - o];
//     }
// }
// int main()
// {
//     long long n = 7;
//     long long arr[n] = {1, 2, 3, 5, 4, 7, 10};
//     sortIt(arr, n);
//     for (long long i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     return 0;
// }
//q- Find the fine
// Given an array of penalties fine[], an array of car numbers car[], and also the date. The task is to find the total fine which will be collected on the given date. Fine is collected from odd-numbered cars on even dates and vice versa.

// #include <iostream>
// using namespace std;
// long long int totalFine(int n, int date, int car[], int fine[])
// {
//     long long totalFineO = 0, totalFineE = 0;
//     //----------------below poor appproach uses loop code twice

//     // if(date%2==0){
//     //     for(int i=0;i<n;i++){
//     //         if(car[i]%2!=0){
//     //             totalFine+=fine[i];
//     //         }
//     //     }
//     //     return totalFine;
//     // }
//     // else{
//     //      for(int i=0;i<n;i++){
//     //         if(car[i]%2==0){
//     //             totalFine+=fine[i];
//     //         }
//     //     }
//     //     return totalFine;
//     // }

//     //----------better sol is to calculate in one go and return based on date condition
//     for (int i = 0; i < n; i++)
//     {
//         if (car[i] % 2 == 0)
//             totalFineE += fine[i];
//         else
//             totalFineO += fine[i];
//     }
//     if (date % 2 == 0)
//         return totalFineO;
//     return totalFineE;
// }
// int main()
// {

//     return 0;
// }

//q.You are given an array A, of N elements. Find minimum index based distance between two elements of the array, x and y.
// sol - two pointer method

// #include <bits/stdc++.h>
// using namespace std;
// int minDist(int a[], int n, int x, int y)
// {
//     int recent_x = -1, recent_y = -1, minDist = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == x)
//         {
//             recent_x = i;
//             if (recent_y != -1)
//                 minDist = min(abs(recent_x - recent_y), minDist);
//         }
//         else if (a[i] == y)
//         {
//             recent_y = i;
//             if (recent_x != -1)
//                 minDist = min(abs(recent_x - recent_y), minDist);
//         }
//     }
//     if (minDist == INT_MAX)
//         return -1;
//     return minDist;
// }
// int main()
// {
//     int x = 1, y = 4, n = 7;
//     int a[7] = {1, 7, 4, 3, 1, 4};
//     cout << "Min index distance between " << x << " and " << y << " = " << minDist(a, n, x, y);
//     return 0;
// }

// q.Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2, otherwise false.---------------------------------pending

//q - Given an array containing n numbers. The problem is to find the length of the longest contiguous subarray such that every element in the subarray is strictly greater than its previous element in the same subarray.

// #include <bits/stdc++.h>
// using namespace std;
// long int lenOfLongIncSubArr(long int arr[], long int n)
// {
//     long int prev = 0, next = 1, len = 1, maxLen = 1;
//     //solution without seeing editorial
//     // while(next<n){
//     //     if(arr[next]>arr[prev]){
//     //         len++;
//     //     }
//     //     else{
//     //         len=1;
//     //     }
//     //     maxLen=max(len,maxLen);
//     //     prev=next;
//     //     next++;
//     // }
//     // return maxLen;

//     //better solution
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i + 1] > arr[i])
//             len++;
//         else
//         {
//             maxLen = max(len, maxLen);
//             len = 1;
//         }
//     }
//     maxLen = max(len, maxLen);
//     return maxLen;
// }
// int main()
// {
//     long int arr[9] = {5, 6, 3, 5, 7, 8, 9, 1, 2}, n = 9;
//     cout << "length of largest subarray is = " << lenOfLongIncSubArr(arr, n);
//     return 0;
// }

//q.
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> firstAndLast(vector<int> &arr, int n, int x)
// {
//     int high = n - 1;
//     int low = 0;
//     int mid;
//     vector<int> temp;
//     while (low <= high)
//     {
//         mid = (high + low) / 2;
//         if (arr[mid] == x && arr[mid - 1] != x)
//         {
//             temp.push_back(mid);
//             low = mid + 1;
//         }
//         if (arr[mid] == x && arr[mid + 1] != x)
//         {
//             temp.push_back(mid);
//             high = mid - 1;
//         }
//         else if (arr[mid] > x)
//             high = mid - 1;
//         else if (arr[mid] < x)
//             low = mid + 1;
//     }
//     if (temp.size() != 0)
//         return temp;
//     else
//         temp.push_back(-1);
//     return temp;
// }
// int main()
// {
//     vector<int> arr = {1, 3, 3, 3, 3, 4};
//     vector<int> temp = firstAndLast(arr, 6, 3);
//     for (int i = 0; i < temp.size(); i++)
//     {
//         cout << temp[i] << " ";
//     }
//     return 0;
// }


//qshuffle integers ----------------pedning
//q Elements in the Range ----------------pedning
//q Type of array  ----------------pedning
//q Absolute Difference of 1  ----------------pedning
//q Arranging the array  ----------------pedning