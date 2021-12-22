#include<stdio.h>

int main(){
    float num;
    printf("Enter the num: ");
    scanf("%f",&num);
    // printf("num is %f:",num);

    while(num>=10 &&num<=20 ){
        printf("%f",num);
        num++;
    }
    return 0;
}