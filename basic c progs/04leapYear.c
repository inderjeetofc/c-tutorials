#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%100==0 && year%400==0){
        printf("you entered a leap year which is a century!");
    }
    else if(year%100!=0 && year%4==0){
        printf("you entered a leap year which is not a century!");
    }
    else
    printf("this is not a leap year!");
    return 0;
}