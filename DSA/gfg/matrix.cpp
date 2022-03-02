// ques - print matrix in snake patterb
// dol
// #include <iostream>
// using namespace std;
// void printInSnake(int arr[][4], int row)
// {
//     int j = 0;
//     for (int i = 0; i < row; i++)
//     {
//         while (j < 4 && i % 2 == 0)
//         {
//             cout << arr[i][j] << " ";
//             j++;
//         }
//         while (j > 0 && i % 2 != 0)
//         {
//             j--;
//             cout << arr[i][j] << " ";
//         }
//     }
// }
// int main()
// {
//     int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     printInSnake(arr, 4);
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     for (int j = 0; j < 4; j++)
//     //         cout << arr[i][j];
//     // }
//     return 0;
// }
// ques - boundary traversal of matrix
// sol
// #include <iostream>
// using namespace std;
// void boundaryTraversal(int arr[][4], int row)
// {
//     for (int i = 0; i < row; i++)
//         cout << arr[0][i] << " ";
//     for (int i = 1; i < row; i++)
//         cout << arr[i][3] << " ";
//     for (int i = row - 2; i >= 0; i--)
//         cout << arr[row - 1][i] << " ";
//     for (int i = row - 2; i >= 1; i--)
//         cout << arr[i][0] << " ";
// }
// int main()
// {
//     int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     boundaryTraversal(arr, 4);
//     return 0;
// }

// ques- transpose of a matrix
// sol
// #include <bits/stdc++.h>
// using namespace std;
// void transpose(int arr[][4], int row)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = i + 1; j < 4; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }
// int main()
// {
//     int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     transpose(arr, 4);
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//             cout << arr[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }
// ques rotate a matrix by 90deg anti clockwise
// sol
// #include <bits/stdc++.h>
// using namespace std;
// void rotateMatrix(int arr[][4], int row)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = i + 1; j < row; j++)
//             swap(arr[i][j], arr[j][i]);
//     }
//     for (int i = 0; i < row / 2; i++)
//     {
//         for (int j = 0; j < row; j++)
//             swap(arr[i][j], arr[row - 1 - i][j]);
//     }
// }
// int main()
// {
//     int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     rotateMatrix(arr, 4);
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//             cout << arr[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

// ques - spiral traversal of array
// sol
// #include <iostream>
// using namespace std;
// void boundaryTraversal(int arr[][5], int row)
// {
//     int left = 0, right = row - 1, top = 0, bottom = row - 1;
//     while (left <= right && top <= bottom)
//     {
//         for (int i = left; i <= right; i++)
//             cout << arr[top][i] << " ";
//         for (int i = top + 1; i <= bottom; i++)
//             cout << arr[i][right] << " ";
//         for (int i = right - 1; i >= left; i--)
//             cout << arr[bottom][i] << " ";
//         for (int i = bottom - 1; i >= top + 1; i--)
//             cout << arr[i][left] << " ";
//         left++;
//         right--;
//         top++;
//         bottom--;
//     }
// }
// int main()
// {
//     int arr[][5] = {
//         {1, 2, 3, 4, 5},
//         {6, 7, 8, 9, 10},
//         {11, 12, 13, 14, 15},
//         {16, 17, 18, 19, 20},
//         {21, 22, 23, 24, 25}};
//     boundaryTraversal(arr, 5);
//     return 0;
// }
// ques find an element in row and column wise sorted matrix
// sol
#include <iostream>
using namespace std;
void findE(int arr[][5], int row, int num)
{
    int rI;
    for (int j = 0; j <= row; j++)
    {
        if (arr[j][0] == num)
        {
            cout << "Num found at - "
                 << "(" << j << "," << 0 << ")";
            return;
        }
        if (arr[j][0] > num || j == row)
        {
            rI = j - 1;
            break;
        }
    }
    for (int i = 0; i < row; i++)
    {
        if (arr[rI][i] == num)
        {
            cout << "Num found at - "
                 << "(" << rI << "," << i << ")";
            return;
        }
    }
    cout << "Num not found !";
    return;
}
int main()
{
    int arr[][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};
    findE(arr, 5, 17);
    return 0;
}
