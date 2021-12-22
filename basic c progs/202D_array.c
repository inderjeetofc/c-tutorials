#include <stdio.h>

int main()
{
    int animal[4][3];
    //Read 2D array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter char of animal name: ");
                scanf("%d",&animal[i][j]);
        }
    }
    //print 2D array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",animal[i][j]);
                
        }
    }
    return 0;
}