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

// ques reverse words in string
#include <bits/stdc++.h>
using namespace std;
void reverseWords(string str)
{
    string temp;
    int n = str.length();
    vector<int> space;
    space.push_back(n - 1);
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            space.push_back(i);
        }
    }
    int k = 0;
    int i;
    while (k + 1 < space.size())
    {
        i = space[k + 1];
        while (i < space[k])
        {
            temp += str[i + 1];
            i++;
        }
        temp += ' ';
        k++;
    }
    i = 0;
    while (i < space[k])
    {
        temp += str[i];
        i++;
    }
    str = temp;
    cout << str << endl;
}
int main()
{
    string str = "this is my world";
    reverseWords(str);
    return 0;
}