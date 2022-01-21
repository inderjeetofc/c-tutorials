// program to read integers form file
// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     int a,i=0;
//     ptr = fopen("filetut1.txt", "r");
//     while ( i<3)
//     {
//         fscanf(ptr, "%d", &a);
//         printf("\nValue is : - %d", a);
//         i++;
//     }
//     // fclose(ptr);
//     return 0;
// }

// program to store multiplication table in a text file
// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     int num;
//     printf("Enter the number to print table in a file : -");
//     scanf("%d", &num);
//     ptr = fopen("filetut2mul.txt", "w");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("\n%d x %d = %d", num, i + 1, num * (i + 1));
//         fprintf(ptr, "\n%d x %d = %d", num, i + 1, num * (i + 1));
//     }
//     fclose(ptr);
//     printf("\nSuccessfully generated table of %d to file filetut2mul.txt ", num);
//     return 0;
// }

//program to read content of file char by char and paste its content in other file twice

#include <stdio.h>

int main()
{
    FILE *ptr, *ptr1;
    char ch;
    int j = 0;
    ptr1 = fopen("filetut3paste.txt", "w");
    printf("The content is : - \n");
    while (j < 2)
    {
        ptr = fopen("filetut3.txt", "r");
        ch = fgetc(ptr);
        while (ch != EOF)
        {
            printf("%c", ch);
            fprintf(ptr1, "%c", ch);
            // fputc(ch,ptr1);
            ch = fgetc(ptr);
        }
        j++;
    }
    fclose(ptr);
    fclose(ptr1);
    printf("\nYour content is pasted in filetut3paste.txt file ");
    return 0;
}

// // program to take name and salaray as input and paste it to file
// #include <stdio.h>

// int main()
// {
//     char name[20];
//     float salary;
//     int i = 0;
//     FILE *ptr;
//     ptr = fopen("filetut4paste.txt", "w");
//     while (i < 2)
//     {
//         printf("\nEnter name %d : -", i + 1);
//         scanf("%s", name);
//         fprintf(ptr, "\nName : %s", name);
//         printf("\nEnter salary %d : -", i + 1);
//         scanf("%f", &salary);
//         fprintf(ptr, "\tSalary:%0.2f", salary);
//         i++;
//     }
//     fclose(ptr);
//     return 0;
// }

//program to double int values in a file
// #include <stdio.h>

// int main()
// {
//     FILE *ptr, *ptr1;
//     char ch;
//     int a, b, i = 0;
//     ptr = fopen("filetut1.txt", "r");
//     ptr1 = fopen("filetut5.txt", "w");
//     // ch = fgetc(ptr);
//     while (i < 10)
//     {
//         fscanf(ptr, "%d", &a);
//         fprintf(ptr1, "\n%d", a * 2);
//         printf("\n%d", a * 2);
//         i++;
//     }
//     return 0;
// }