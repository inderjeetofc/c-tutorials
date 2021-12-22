#include<stdio.h>

int main(){
    int n,i=2;
    printf("enter the value of n:-");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            break;
        }
        else
            i++;
    }
    if(i==n){
        printf("Prime no.");
    }
    else{
        printf("not a prime no.");
    }
    return 0;
}