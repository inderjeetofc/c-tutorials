// #include<stdio.h>

// int main(){
//     int a=5;
//     int *j=&a;
//     printf("address of a is %u",j);
//     printf("content of a is %u",*j);
//     return 0;
// }


// #include<stdio.h>
// // void func(int a);
// int main(){
//     int a=7;
//     printf("address of outside func %u",&a);
//     func(a);
//     return 0;
// }
// void func(int a){
//     printf("\naddress inside func %u",&a);
// }

#include<stdio.h>
void func(int *c);
int main(){
    int a = 3;
    printf("the value of a before : %d",a);
    a*=10;
    printf("\n10 times of a outside : %u",a);

    func(&a);
    return 0;
}
void func(int *b){
    printf("\n10 times of a : %u",*b);
}