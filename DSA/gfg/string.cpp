// ques- print freq of char in string smaleest to highest
// #include <bits/stdc++.h>
// using namespace std;
// void printFreq(string str)
// {
//     map<int, int> m;
//     for (char i : str)
//     {
//         m[i]++;
//     }
//     for (auto i = m.begin(); i != m.end(); i++)
//     {
//         cout << (char)(i->first) << " - " << i->second;
//         cout << endl;
//     }
// }
// int main()
// {
//     string str = "geeksforgeeks";
//     printFreq(str);
//     return 0;
// }

//---- above ques implementation with count sort
// #include <bits/stdc++.h>
// using namespace std;
// // void printFreq(string str)
// // {
// //     int count[26] = {0}; //----to initialise array with 0
// //     //----below code is redundant
// //     // for (int i = 0; i < 26; i++)
// //     // {
// //     //     count[i] = 0;
// //     // }
// //     for (char i : str)
// //     {
// //         count[i - 'a']++;
// //     }
// //     for (int i = 0; i < 26; i++)
// //     {
// //         if (count[i] > 0)
// //             cout << char(i + 'a') << "-" << count[i] << endl;
// //     }
// // }
// // int main()
// // {
// //     string str = "geeksforgeeks";
// //     printFreq(str);
// //     return 0;
// // }

// // q- palindrome check
// // #include <bits/stdc++.h>
// // using namespace std;
// // bool palindrome(string str)
// // {
// //     int n = str.length();
// //     for (int i = 0; i < n / 2; i++)
// //     {
// //         if (str[i] != str[n - i - 1])
// //         {
// //             return false;
// //         }
// //     }
// //     return true;
// // }
// // int main()
// // {
// //     string str = "mpam";
// //     cout << palindrome(str) << endl;
// //     return 0;
// // }

// // q check if a string is subsequence of given string
// #include <bits/stdc++.h>
// using namespace std;
// // bool subsequence(string str1, string str2)
// // {
// //     int j = 0;
// //     for (int i = 0; i < str1.length() && j < str2.length(); i++)
// //     {
// //         if (str1[i] == str2[j])
// //             j++;
// //     }
// //     if (j == str2.length())
// //         return true;
// //     return false;
// // }

// // by recursion
// bool subsequence(string str1, string str2, int n, int m)
// {
//     if (m == 0)
//         return true;
//     if (n == 0)
//         return false;
//     if (str1[n - 1] == str2[m - 1])
//         return subsequence(str1, str2, n - 1, m - 1);
//     else
//         return subsequence(str1, str2, n - 1, m);
// }
// int main()
// {
//     string str1 = "ABCD";
//     string str2 = "ABC";
//     cout << subsequence(str1, str2, str1.length(), str2.length()) << endl;
//     return 0;
// }

// q -- check if given string is anagram (permutation)
// #include <bits/stdc++.h>
// using namespace std;
// bool checkAnagram(string str1, string str2)
// {
//     if (str1.length() != str2.length())
//     {
//         cout << "Lengths unequal - ";
//         return false;
//     }
//     unordered_map<char, int> m;
//     // for (char i : str1)
//     // {
//     //     m[i]++;
//     // }
//     // for (char i : str2)
//     // {
//     //     m[i]--;
//     // }
//     for (int i = 0; i < str1.length(); i++)
//     {
//         m[str1[i]]++;
//         m[str2[i]]--;
//     }
//     for (auto itr = m.begin(); itr != m.end(); itr++)
//     {
//         if (itr->second != 0)
//             return false;
//     }
//     return true;
// }
// int main()
// {
//     cout << checkAnagram("aab", "abb") << endl;
//     ;
//     return 0;
// }

// ques - find occurence of leftmost character
// #include <bits/stdc++.h>
// using namespace std;
// int leftOccurence(string str)
// {
//     int CHAR = 256;
//     int n = str.length();
//     // int count[CHAR] = {0};

//     // for (int i = 0; i < n; i++)
//     // {
//     //     count[str[i]]++;
//     // }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (count[str[i]] > 1)
//     //     {
//     //         return i;
//     //     }
//     // return -1;
//     // }

//     // ------efficient solution in one traversal
//     // int count[CHAR];
//     // int res = INT_MAX;
//     // fill(count, count + CHAR, -1);
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (count[str[i]] != -1)
//     //         res = min(res, count[str[i]]);
//     //     else
//     //         count[str[i]] = i;
//     // }
//     // return (res != INT_MAX) ? res : -1;

//     //---little more efficient solution
//     bool count[CHAR];
//     int res = -1;
//     fill(count, count + CHAR, false);
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (count[str[i]])
//             res = i;
//         else
//             count[str[i]] = true;
//     }
//     return res;
// }
// int main()
// {
//     string str = "abcd";
//     cout << leftOccurence(str) << endl;
//     // cout << 14 % 13 << endl;
//     return 0;
// }

// ques left most non repeting char
// #include <bits/stdc++.h>
// using namespace std;
// int leftMostNonRepeat(string str)
// {
//     int CHAR = 256;
//     int n = str.length();
//     int res = INT_MAX;
//     int count[CHAR];
//     fill(count, count + CHAR, -1);
//     for (int i = 0; i < n; i++)
//     {
//         if (count[str[i]] == -1)
//         {
//             count[str[i]] = i;
//         }
//         else if (count[str[i]] >= 0)
//         {
//             count[str[i]] = -2;
//         }
//         else
//             count[str[i]] = -2;
//     }
//     for (int i = 0; i < CHAR; i++)
//     {
//         if (count[i] >= 0)
//             res = min(res, count[i]);
//     }
//     return res == INT_MAX ? -1 : res;
// }
// int main()
// {
//     string str = "aabdeghh";
//     cout << leftMostNonRepeat(str) << endl;
//     return 0;
// }

//-- ques reverse words in string
// #include <bits/stdc++.h>
// using namespace std;
// void reverseWords(string str)
// {
//     int start = 0, end;
//     int n = str.length();
//     //----reverse all words except last one
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == ' ')
//         {
//             end = i - 1;
//             while (start < end && end < n)
//             {
//                 swap(str[start], str[end]);
//                 start++;
//                 end--;
//             }
//             start = i + 1;
//         }
//     }
//     //----reverse last word
//     end = n - 1;
//     while (start < end)
//     {
//         swap(str[start], str[end]);
//         start++;
//         end--;
//     }
//     start = 0;
//     end = n - 1;
//     // ---reverse whole string
//     while (start < end)
//     {
//         swap(str[start], str[end]);
//         end--;
//         start++;
//     }
//     cout << str << endl;
// }
// int main()
// {
//     string str = "i love programming";
//     reverseWords(str);
//     return 0;
// }

// test ques - reverse k elements in array
// #include <bits/stdc++.h>
// using namespace std;
// void reverseK(int arr[], int n, int k)
// {
//     int start, end;
//     for (int i = 0; i < n; i += k)
//     {
//         start = i;
//         end = start + k - 1;
//         while (start < end && end < n)
//         {
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//         }
//         if (end >= n)
//         {
//             end = n - 1;
//             while (start < end)
//             {
//                 swap(arr[start], arr[end]);
//                 start++;
//                 end--;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }
// int main()
// {
//     int arr[] = {7, 12, 3, 8, 16, 7, 9, 81};
//     reverseK(arr, 8, 4);

//     return 0;
// }

// ques- check pattern in string
// #include <bits/stdc++.h>
// using namespace std;
// void checkPattern(string str1, string str2)
// {
//     int n1 = str1.length();
//     int n2 = str2.length();
//     // stack<int> s;
//     // int j = n2 - 1, index;
//     // for (int i = n1 - 1; i >= 0; i--)
//     // {
//     //     if (str1[i] != str2[j])
//     //         j = n2 - 1;
//     //     if (str1[i] == str2[j])
//     //     {
//     //         index = i;
//     //         j--;
//     //     }
//     //     if (j < 0)
//     //     {
//     //         s.push(index);
//     //     }
//     // }
//     // if (s.empty())
//     //     cout << "not present !";
//     // else
//     // {
//     //     while (!s.empty())
//     //     {
//     //         cout << s.top() << endl;
//     //         s.pop();
//     //     }
//     // }
//     //---------mtd - -rabin karp algorithm -----------pending hai yeh and iske aage ke 2 algo
//     int hashI = 0, hashJ = 0, j = 0;
//     for (int j = 0; j < n2; j++)
//     {
//         hashJ += str2[j];
//     }
//     for (int i = 1; i < n2; i++)
//     {
//         hashI += str1[i];
//     }
//     int index = 0;
//     for (int i = 0; i < n1 - n2 + 1; i++)
//     {
//         hashI += str1[i + n2];
//         cout << hashI << " " << hashJ << endl;
//         if (hashI == hashJ)
//         {
//             cout << index << endl;
//         }
//         j = 0;
//         hashI -= str1[i];
//         // index++;
//     }
// }
// int main()
// {
//     string str1 = "geeksforgeeks";
//     string str2 = "eks";
//     checkPattern(str1, str2);
//     return 0;
// }

// ques check if given string can obtained by rotating other string
// #include <bits/stdc++.h>
// using namespace std;
// bool checkRotation(string str1, string str2)
// {
//     //--------ghatiya approach
//     // unordered_map<char, int> m;
//     // int n1 = str1.length();
//     // for (int i = 0; i < n1; i++)
//     // {
//     //     m.insert({str1[i], i});
//     // }
//     // auto index = m.find(str2[0]);
//     // for (int i = 1; i < n1; i++)
//     // {
//     //     auto itr = m.find(str2[i]);
//     //     if (abs(itr->second - i) != index->second)
//     //         return false;
//     // }
//     // return true;
//     if (str1.length() != str2.length())
//         return false;
//     return ((str1 + str1).find(str2) != string::npos);
// }
// int main()
// {
//     string str1 = "abcd";
//     string str2 = "bcda";
//     cout << checkRotation(str1, str2) << endl;
//     return 0;
// }

// ques- check if anangram is present in a string
//  sol- sum of characters is const
#include <bits/stdc++.h>
using namespace std;
bool checkAnagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    // int hashJ = 0, hashI = 0;
    // for (int i = 0; i < n2; i++)
    //     hashJ += str2[i];
    // for (int i = 0; i < n2; i++)
    //     hashI += str1[i];
    // for (int i = 0; i < n1 - n2 + 1; i++)
    // {
    //     cout << hashI << " " << hashJ << endl;
    //     if (hashI == hashJ)
    //     {
    //         return true;
    //     }
    //     hashI -= str1[i];
    //     hashI += str1[i + n2];
    // }
    // return false;

    unordered_set<char> s;
    for (int i = 0; i < n2; i++)
        s.insert(str2[i]);
    int count = 1;
    bool flag = false;
    for (int i = 0; i < n1; i++)
    {
        if (s.find(str1[i]) != s.end())
        {
            if (flag == true)
                count++;
            flag = true;
        }
        else
            flag = false;
    }
    return (count == n2);
}
int main()
{
    string str1 = "geeksforgeeks";
    string str2 = "keeg";
    cout << checkAnagram(str1, str2) << endl;
    return 0;
}