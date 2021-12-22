// #include<stdio.h>
//program to see hoe ptr increment stores bytes for int and float
// int main(){
//    float a,*ptr=&a;
//    int b,*ptr2=&b;
//     printf("\n ptr 1 %d",ptr);
//     printf("\n ptr 2 %d",ptr2);
//     // printf("\n subtraction of 2 ptrs %d",ptr-ptr2);
//     // printf("\n ptr right now %d",ptr);
//     // ptr=ptr+2;
//     // printf("\n ptr right now 2 %d",ptr);
//     return 0;
// }


#include<stdio.h>

int main(){
    int marks[5]={90,85,74,63,12},*ptr;
    for(ptr=&marks[0];ptr<=&marks[5];ptr++){
        printf("\n ptr value = %d",*ptr);
        printf("\n ptr add = %d",ptr);
    }
    return 0;
}