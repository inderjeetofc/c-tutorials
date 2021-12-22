#include<stdio.h>

int main(){
    int n,sum=0,mul,i=1;
    printf("enter the value of n:-");
    scanf("%d",&n);
    while(i<=n){
        mul=8*i;
        sum+=mul;
        i++;
    }
        printf("%d",sum);
    return 0;
}