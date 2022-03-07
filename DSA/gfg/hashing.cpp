// implementation of hash table by chaining method - using linkeed list
// sol - this is a method to handle collisions i.e two or more numbers having same index
// #include <bits/stdc++.h>
// using namespace std;
// struct myHash
// {
//     int bucket;
//     list<int> *table;
//     myHash(int b)
//     {
//         bucket = b;
//         table = new list<int>[bucket];
//     }
//     void mhInsert(int num)
//     {
//         int index = num % bucket;
//         table[index].push_back(num);
//     }
//     bool mhSearch(int num)
//     {
//         int index = num % bucket;
//         for (auto x : table[index])
//         {
//             if (x == num)
//                 return true;
//         }
//         return false;
//     }
//     void mhDelete(int num)
//     {
//         int index = num % bucket;
//         table[index].remove(num);
//     }
// };
// int main()
// {
//     myHash obj(7);
//     obj.mhInsert(54);
//     obj.mhInsert(5);
//     obj.mhInsert(13);
//     obj.mhInsert(85);
//     obj.mhInsert(8);
//     obj.mhInsert(18);
//     cout << obj.mhSearch(18) << endl;
//     cout << obj.mhSearch(74) << endl;
//     cout << obj.mhSearch(13) << endl;
//     obj.mhDelete(13);
//     cout << obj.mhSearch(13) << endl;
//     cout << obj.mhSearch(54) << endl;
//     cout << obj.mhSearch(5) << endl;

//     return 0;
// }

// Note : map is based on self balancing BST and it is ordered whereas unordered map is based on hashing with elements in random order
// note diff between unordered set and map is set only store key no value, whereas as map has key value pair

// ques - count distinct elements in array
// sol using unordered set - as it stores distinct element only and not same element twice
// #include <bits/stdc++.h>
// using namespace std;
// int countDistinct(int arr[], int n)
// {
//     // unordered_set<int> num;
//     // for (int i = 0; i < n; i++)
//     //     num.insert(arr[i]);
//     // shorter approach
//     unordered_set<int> num(arr, arr + n);
//     return num.size();
// }
// int main()
// {
//     int arr[] = {15, 12, 13, 12, 13, 13, 18, 15, 41};
//     cout << countDistinct(arr, 9) << endl;
//     return 0;
// }

// ques - find freq of array elements
// sol - unordered map with key and freq as pair
// #include <bits/stdc++.h>
// using namespace std;
// void countFreq(int arr[], int n)
// {
//     unordered_map<int, int> keyFreq;
//     for (int i = 0; i < n; i++)
//     {
//         keyFreq[arr[i]]++;
//     }
//     for (auto x : keyFreq)
//         cout << "(" << x.first << "," << x.second << ")" << endl;
// }
// int main()
// {
//     int arr[] = {15, 12, 13, 12, 13, 13, 18, 15, 41};
//     countFreq(arr, 9);
//     return 0;
// }

// ques intersection of two unsorted arrays
// sol- hashing
// #include <bits/stdc++.h>
// using namespace std;
// int intersect(int arr1[], int arr2[], int n, int m)
// {
//     // unordered_map<int, int> nums;
//     // int count = 0;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     nums[arr1[i]];
//     // }
//     // for (int i = 0; i < m; i++)
//     // {
//     //     auto itr = nums.find(arr2[i]);
//     //     if (itr != nums.end() && itr->second == 0)
//     //     {
//     //         itr->second++;
//     //         count++;
//     //     }
//     // }
//     // efficeint solution by using set
//     unordered_set<int> nums(arr1, arr1 + n);
//     int count = 0;
//     for (int i = 0; i < m; i++)
//     {
//         if (nums.find(arr2[i]) != nums.end())
//         {
//             count++;
//             nums.erase(arr2[i]);
//         }
//     }
//     return count;
// }
// int main()
// {
//     int arr1[] = {10, 10, 10, 10, 10, 10};
//     int arr2[] = {10, 10, 10, 10};
//     cout << intersect(arr1, arr2, 6, 4) << endl;
//     return 0;
// }

// ques union of two unsorted arrays
// sol - hashing
// #include <bits/stdc++.h>
// using namespace std;
// int unionArr(int arr1[], int arr2[], int n, int m)
// {
//     // unordered_map<int, int> nums;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     nums[arr1[i]] = 0;
//     // }
//     // int count = nums.size();
//     // for (int i = 0; i < m; i++)
//     // {
//     //     if (nums.find(arr2[i]) == nums.end())
//     //     {
//     //         count++;
//     //     }
//     // }
//     // efficient approach
//     unordered_set<int> nums(arr1, arr1 + n);
//     for (int i = 0; i < m; i++)
//     {
//         nums.insert(arr2[i]);
//     }
//     return nums.size();
// }
// int main()
// {
//     int arr1[] = {10, 11, 50, 5, 10};
//     int arr2[] = {31, 15, 40, 10};
//     cout << unionArr(arr1, arr2, 5, 4) << endl;
//     return 0;
// }

// ques find pair with given sum unsorted array
// sol
// #include <bits/stdc++.h>
// using namespace std;
// bool findSum(int arr[], int n, int sum)
// {
//     unordered_set<int> nums;
//     for (int i = 0; i < n; i++)
//     {
//         if (nums.find(sum - arr[i]) != nums.end())
//             return true;
//         else
//             nums.insert(arr[i]);
//     }
//     return false;
// }
// int main()
// {
//     int arr[] = {10, 11, 50, 5, 10};
//     cout << findSum(arr, 5, 60) << endl;
//     return 0;
// }

// ques - check if subarray with zero sum is present
// sol - using unordered set
// #include <bits/stdc++.h>
// using namespace std;
// bool sumZero(int arr[], int n)
// {
//     unordered_set<int> nums;
//     int prefixSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         prefixSum += arr[i];
//         if (nums.find(prefixSum) != nums.end())
//             return true;
//         if (prefixSum == 0)
//             return true;
//         nums.insert(prefixSum);
//     }
//     return false;
// }
// int main()
// {
//     int arr[] = {20, -50, 13, -3, -10};
//     cout << sumZero(arr, 5) << endl;
//     return 0;
// }