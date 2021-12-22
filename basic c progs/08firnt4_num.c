#include<stdio.h>

int main(){
    float num;
    printf("Enter the num: ");
    scanf("%f",&num);
    do{
    printf("%f\n",num);
    num++;
    }while(num<=4);
    return 0;
}