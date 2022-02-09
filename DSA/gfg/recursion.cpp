// q- solving palindrom problem with recursion
//  #include <iostream>
//  using namespace std;
//  bool checkPalindrome(string str, int start, int end)
//  {
//      if (start >= end)
//          return 1;
//      return ((str[start] == str[end]) && checkPalindrome(str, start + 1, end - 1));
//  }
//  int main()
//  {
//      string str = "abba";
//      int start = 0, end = str.length() - 1;
//      cout << (checkPalindrome(str, start, end) ? "true" : "false");
//      return 0;
//  }

// q-2 sum of digit
// sol-tail recursive mthd
// #include <iostream>
// using namespace std;
// // int sumOfDigit(int num, int sum)
// int sumOfDigit(int num)
// {
//     // by tail recursive mthd---
//     //  if (num == 0)
//     //      return sum;
//     //  int digit = num % 10;
//     //  return sumOfDigit(num / 10, sum + digit);

//     // by normal recursion
//     // if (num == 0)
//     //     return 0;
//     // return sumOfDigit(num / 10) + num % 10;

//     // iterative solution
//     int sum = 0;
//     while (num > 0)
//     {
//         sum += num % 10;
//         num = num / 10;
//     }
//     return sum;
// }
// int main()
// {
//     // cout << sumOfDigit(72389, 0) << endl;
//     cout << sumOfDigit(302389) << endl;
//     return 0;
// }

// q-divide rope into max pieces
// #include <bits/stdc++.h>
// using namespace std;
// int maxNum(int a, int b, int c)
// {
//     if (a > b && a > c)
//         return a;
//     if (b > a && b > c)
//         return b;
//     return c;
// }
// int divideRope(int len, int a, int b, int c)
// {
//     if (len < 0)
//         return -1;
//     if (len == 0)
//         return 0;
//     int res = maxNum(divideRope(len - a, a, b, c), divideRope(len - b, a, b, c), divideRope(len - c, a, b, c));
//     // note it is important to check if the res is valid then only add 1 else return -1
//     if (res == -1)
//         return -1;
//     return res + 1;
// }
// int main()
// {
//     cout << divideRope(7, 5, 1, 3) << endl;
//     return 0;
// }

// q generate subset of string
// #include <iostream>
// #include <string.h>
// using namespace std;
// void subSet(string str1, string str2, int i)
// {
//     if (i == str1.length())
//     {
//         cout << str2 << endl;
//         return;
//     }
//     // i++; in recursive ques never increment like this. rather pass in parameter
//     subSet(str1, str2, i + 1);
//     subSet(str1, str2 + str1[i], i + 1);
// }
// int main()
// {
//     subSet("ABC", " ", 0);
//     return 0;
// }

// /q --------------PEMDIG-----------tower oh hanoi prob
// #include <iostream>
// using namespace std;
// void towerSolve(int n, char A, char B, char C)
// {
//     if (n == 1)
//     {
//         cout << "move " << n << " from " << A << " to " << C << endl;
//         return;
//     }
//     towerSolve(n - 1, 'A', 'C', 'B');
//     cout << "move " << n << " from " << A << " to " << C << endl;
//     towerSolve(n - 1, 'B', 'A', 'C');
// }
// int main()
// {
//     towerSolve(2, 'A', 'B', 'C');
//     return 0;
// }

// ques josephus killing prob
// #include <iostream>
// using namespace std;
// int josephus(int n, int k)
// {
//     if (n == 1)
//         return 0;
//     return ((josephus(n - 1, k) + k) % n);
//     // return ((n - 1) / 3) + k % n;
// }
// int main()
// {
//     cout << josephus(5, 3);
//     return 0;
// }

// ques - subset equal given sum
// #include <iostream>
// using namespace std;
// int subSetSum(int arr1[], int n, int sum)
// {
//     if (n == 0)
//     {
//         if (sum == 0)
//             return 1;
//         return 0;
//     }
//     return subSetSum(arr1, n - 1, sum) + subSetSum(arr1, n - 1, sum - arr1[n - 1]);
// }
// int main()
// {
//     int arr1[] = {10, 23, 15};
//     cout << subSetSum(arr1, 3, 25) << endl;
//     return 0;
// }

// ques- print all permutations of given input
// sol
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void permute(string str, int i = 0)
{
    if (i == str.length() - 1)
    {
        cout << str << " ";
        return;
    }
    for (int j = i; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        permute(str, i + 1);
        swap(str[i], str[j]);
    }
}
int main()
{
    permute("ABC");
    return 0;
}