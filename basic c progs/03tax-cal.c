#include <stdio.h>

int main()
{
    float income,tax=0;
    printf("Enter your income :");
    scanf("%f", &income);
    if (income <= 250000)
    {
        // printf("you dont have to pay any tax :)");
        tax=0;
    }
   if (income>=250000 && income < 500000)
    {
        tax=tax+0.05*(income-250000);
        // printf("tax amount to be paid is 5\% :%f", tax);
    }
    if (income>=500000 && income < 1000000)
    {
        tax=tax+0.2*(income-500000);
        // printf("tax amount to be paid is 20\% :%f", tax);
    }
    if(income>=1000000)
    {
        tax=tax+0.3*(income-1000000);
        // printf("tax amount to be paid is 30\% :%f", tax);
    }
        printf("tax amount to be paid is :%f", tax);


    return 0;
}