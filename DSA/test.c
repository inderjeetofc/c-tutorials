#include <stdio.h>
void rotate(int n, int a[n][n])
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3] = {{5, 7,1}, {10, 9,3},{50,90,23}};
    rotate(3, a);
    return 0;
}