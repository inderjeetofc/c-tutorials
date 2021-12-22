#include<stdio.h>
int printStar(int n);
int main(){
    int n;
    printf("enter no.of rows of stars to print");
    scanf("%d",&n);
    printStar(n);
    return 0;
}
int printStar(int n){
    if(n==1){
        printf("*\n");
    return;
    }
    printStar(n-1);
    for(int i=1;i<=(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}
