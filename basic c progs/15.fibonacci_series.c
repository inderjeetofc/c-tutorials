#include<stdio.h>
void fibonacci(int a,int b,int sum,int i,int n);
int main(){
    int a=0,b=1,sum=1,i=3,n;
    printf("Enter the value of n (>=3): ");
    scanf("%d",&n);
    // printf("%d %d %d",n,i,sum);
    printf("%d,%d,",a,b);
    fibonacci(a,b,sum,i,n);
    
    return 0;
}
void fibonacci(int a,int b,int sum,int i,int n){
    if(i==n){
        printf("%d,",sum);
    }
    else{
        printf("%d,",sum);
        a=b;
        b=sum;
        sum=a+b;
        i+=1;
        fibonacci(a,b,sum,i,n);
    }
}