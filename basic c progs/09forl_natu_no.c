// ------print in increasing order------------

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }



// ------print in decreasing order------------
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     for(int i=n;i>0;i--){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// ------------while loop with continue------------
#include<stdio.h>

int main(){
    int n,skip=5,i=0;
    printf("enter the value of n:-");
    scanf("%d",&n);
    do
    {
        if(i!=skip)
        {
        i++;
        continue;
        }
        else
        {
            printf("%d",i);
            i++;
        }
    } while (i<n);
    
    return 0;
}