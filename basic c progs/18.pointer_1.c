// #include<stdio.h>
// void sum(int a, int b,int *add){
//     *add = a+b;
//     // return sum;
// }
// void avg(int a, int b,float *average){
//     *average = (float)(a+b)/2;
//     // return avg;
// }
// int main(){
//     int a,b,add;
//     float average;
//     printf("enter value of a and b \n");
//     scanf("%d %d",&a,&b);
//     sum(a,b,&add);
//     avg(a,b,&average);
//     printf("%d %f",add,average);
//     return 0;
// }

#include<stdio.h>

int main(){
    int i=5,*a,**b;
    a=&i;
    b=&a;
    printf("\naddress at a: %d",a);
    printf("\naddress of i: %d",&i);
    printf("\nvalue at a: %d",*a);
    printf("\naddress of a:  %d",b);
    printf("\nvalue at b (address of a): %d",*b);
    printf("\nvalue at i from b: %d",**b);
    return 0;
}