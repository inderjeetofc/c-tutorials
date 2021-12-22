//program to demonstarate malloc
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     float *ptr;
//     int i;
//     ptr = (float *)malloc(5 * sizeof(float)); //malloc returns a void pointer hence need to be type casted into float int or etc
//     for (i = 0; i < 5; i++)
//     {
//         printf("\nEnter float number %d :", i + 1);
//         scanf("%f", ptr + i);
//     }
//     i = 0;
//     printf("\nNumbers stored in heap memory (dynamic) are :");
//     while (i < 5)
//     {
//         printf("\n%.2f", *(ptr + i));
//         i++;
//     }
//     return 0;
// }

//program to demonstrate calloc

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     float *ptr;
//     int i;
//     ptr = (float *)calloc(5, sizeof(float)); // allocates continuous memory initialised with 0
//     // for (i = 0; i < 5; i++)
//     // {
//     //     printf("\nEnter float number %d :", i + 1);
//     //     scanf("%f", ptr + i);
//     // }
//     i = 0;
//     printf("\nPreinitialised zero in calloc method:");
//     while (i < 5)
//     {
//         printf("\n%.2f", *(ptr + i));
//         i++;
//     }
//     return 0;
// }

//program to demonstarate dynamic memory allocation

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr, num, i;
//     printf("\nHow many numbers you want to enter :");
//     scanf("%d", &num);
//     ptr = (int *)calloc(num, sizeof(int));
//     printf("\nEnter %d numbers(int):", num);
//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", ptr + i);
//     }
//     printf("\nThe numbers you entered are :");
//     for (i = 0; i < num; i++)
//     {
//         printf("\n%d", *(ptr + i));
//     }
//     free(ptr);
//     return 0;
// }

// program to test memory allocation RAM if free is not used
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr, num, i;
//     // printf("\nHow many numbers you want to enter :");
//     // scanf("%d", &num);
//     for (i = 0; i < 750; i++)
//     {
//         printf("\nEnter random numbers to allocate memory(test calloc conusmption):");
//         scanf("%d", &num);
//         ptr = (int *)calloc(600000000, sizeof(int));
//         free(ptr);
//         // scanf("%d", ptr + i);
//     }
//     // printf("\nThe numbers you entered are :");
//     // for (i = 0; i < num; i++)
//     // {
//     //     printf("\n%d", *(ptr + i));
//     // }
//     // free(ptr);
//     return 0;
// }

// program to demonstrate realloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i;
    ptr = (int *)malloc(5 * sizeof(int));
    printf("\nEnter 5 numbers : -");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("\nYou entered numbers : -");
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", *(ptr + i));
    }
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    printf("\nAfter reallocation 10 space for int");
    printf("\nEnter 10 numbers : -");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("\nYou entered numbers : -");
    for (i = 0; i < 10; i++)
    {
        printf("\n%d", *(ptr + i));
    }
    free(ptr);
    return 0;
}
