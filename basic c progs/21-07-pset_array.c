//program to display ptr+2 increment acction on array

// #include<stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(){
//     int num[5],*ptr;
//     ptr=num;
//     printf("\n%d",*(num+2));
//     srand(time(0));
//     for(int i=0;i<5;i++){
//         num[i]=rand()%(100 - 1 + 1)+ 1;
//     }
//     printf("\nGenerated array is :");
//     for(int j=0;j<5;j++){
//         printf("%d , ",num[j]);
//     }
//     printf("\nthis is ptr+2 : %d",*(ptr+2));
//     return 0;
// }

//program to store multiplication table in array and display it

// #include<stdio.h>

// int main(){
//     int num,i,arr[10];
//     printf("Enter number to display table : ");
//     scanf("%d",&num);
//     for(i=0;i<10;i++)
//     arr[i]=num*(i+1);
//     for(i=0;i<10;i++)
//     printf("\n%d x %d = %d",num,i+1,arr[i]);
//     return 0;
// }

//program to reverse array

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void reverseArray(int *arrPtr)
// {
//     int temp;
//     for (int i = 0; i < 5; i++)
//     {
//         temp = arrPtr[i];
//         arrPtr[i] = arrPtr[10 - i - 1];
//         arrPtr[10 - i - 1] = temp;
//     }
// }
// void reverseArrayMtd2(int *arrPtr){
//     int j=9,temp;
// for(int i=0;i<5&&j>=5;i++){
//     temp=arrPtr[i];
//     arrPtr[i]=arrPtr[j];
//     arrPtr[j]=temp;
//     j-=1;
// }
// }
// int main()
// {
//     srand(time(0));
//     int arr[10], *ptr;
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = rand() % (100 - 1 + 1) + 1;
//     }
//     printf("original array elements :");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d , ", arr[i]);
//     }
//     // reverseArray(arr);
//     reverseArrayMtd2(arr);
//     printf("\nreversed array elements :");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d , ", arr[i]);
//     }
//     return 0;
// }

//function to count positive integers in an array

// #include<stdio.h>
// int countPosNum(int *arrPtr){
//     int count =0;
//     for(int i=0;i<10;i++){
//         if(arrPtr[i]>0)
//             count++;
//     }
//     return(count);
// }
// int main(){
//     int arr[10],count;
//     printf("Enter 10 integers : ");
//     for (int i =0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     count = countPosNum(arr);
//     printf("total positive numbers you entered are : %d",count);
//     return 0;
// }

//function 2d array to store mul table of 2 , 9 , 7
// #include <stdio.h>

// int main()
// {
//     int arr[3][10];
//     for (int i = 0; i < 3; i++)
//     {

//         for (int j = 0; j < 10; j++)
//         {
//             if (i == 0)
//             {
//                 arr[i][j] = 2 * (j+1);
//             }
//             else if (i == 1)
//             {
//                 arr[i][j] = 7 * (j+1);
//             }
//             else
//                 arr[i][j] = 9 * (j+1);
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             if (i == 0)
//             {
//                 printf("\n2 x %d = %d",j+1,arr[i][j]);
//             }
//             else if (i == 1)
//             {
//                 printf("\n7 x %d = %d",j+1,arr[i][j]);

//             }
//             else
//                 printf("\n9 x %d = %d",j+1,arr[i][j]);

//         }
//     }
//         return 0;
//     };

//another method for above array
// #include <stdio.h>
// void printTable(int *mulPtr, int num, int n)
// {
//     printf("\n\nmultiplication table of %d is : -", num);
//     printf("\n\n*************************");

//     for (int i = 0; i < n; i++)
//     {
//         mulPtr[i] = num * (i + 1);
//     }
//     for (int i = 0; i < n; i++)
//     {

//         printf("\n%d x %d =%d ", num, i + 1, mulPtr[i]);
//     }
//     printf("\n\n*************************");
// }
// int main()
// {
//     int mul[3][10], num, n;
//     printTable(mul[0], 2, 10);
//     printTable(mul[1], 7, 10);
//     printTable(mul[2], 9, 10);

//     return 0;
// }

//function to create 3d array and print its content addresses in increasing order
#include <stdio.h>
// // void printAddOfArr(int *arrPtr)
// {

//     int **arrPtr2;
//     arrPtr2 = &arrPtr[0];
//     for (int i = 0)
//     {
//     }
// }


// int main()
// {
//     int arr[2][3][4];
//     // ptr = arr[0];
//     // ptr2 = arr[0][0];
//     // ptr3 = arr[0][0][0];
//     for (int i = 0; i < 2; i++)
//     {
//         // printf("\n%d , ", ptr[i]);
//         for (int j = 0; j < 3; j++)
//         {
//             // ptr2 = &ptr[i];
//             // printf("\n%d , ", ptr2[j]);

//             for (int k = 0; k < 4; k++)
//             {
//                 // ptr3 = &ptr2[j];

//                 printf("\n%d , ", &arr[i][j][k]);
//             }
//         }
//     }
//     // printAddOfArr(arr[0]);
//     return 0;
// }


// passing arrays to function 
#include<stdio.h>
void displayArr(int *ptr)
{
    for(int i=0;i<5;i++){
        printf("\n%d",*(ptr+i));
        // ptr++;
    }
}
int main(){
    int a[5]={1,2,3,4,5};
    displayArr(a);
    return 0;
}