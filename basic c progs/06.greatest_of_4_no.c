#include<stdio.h>

int main(){
    float a,b,c,d;
    float g_num=0;
    printf("enter four no.s to check for greatest");
    scanf("%f\n %f\n %f\n %f",&a,&b,&c,&d);
    printf("your no. are %f %f %f %f", a,b,c,d);
    if(a>=g_num){
    g_num=a;
    }
    if(b>=g_num){
    g_num=b;
    }
    if(c>=g_num){
    g_num=c;
    }
    if(d>=g_num){
    g_num=d;
    }
    printf("\n greatest no. is %f",g_num);
    return 0;
}