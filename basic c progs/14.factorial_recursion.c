#include<stdio.h>
int factorial(int num);
int main(){
    int num;
    printf("Enter the no. to find its factorial : ");
    scanf("%d",&num);
    int fact= factorial(num);
    printf("\nfactorial of %d is %d :",num,fact);
    return 0;
}
int factorial(int x){
    if(x==1||x==0){
        return 1;
    }
    else{
       int fact=x*factorial(x-1);
       return fact;
    }
}