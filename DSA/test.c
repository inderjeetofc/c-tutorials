// #include <stdio.h>
// void rotate(int n, int a[n][n])
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", a[j][i]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int a[3][3] = {{5, 7,1}, {10, 9,3},{50,90,23}};
//     rotate(3, a);
//     return 0;
// }

#include <stdio.h>
int findMax(int a[], int n, int max)
{
    for (int i = max + 1; i < n; i++)
    {
        if (a[i] > a[max])
            max = i;
    }
    return max;
}
int *leaders(int a[], int n)
{
    printf("hola");
    int max = -1, j = 0;
    int *b;
    while (max != n - 1)
    {
        max = findMax(a, n, max + 1);
        b[j] = a[max];
        j++;
    }
    b[j] = a[max];
    return b;
}
int main()
{
    int a[] = {16, 17, 4, 3, 5, 2};
    leaders(a, 6);
    // int *maxPtr = leaders(a, 6);
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("\n %d ", maxPtr[i]);
    // }
    return 0;
}
