#include<stdio.h>

int main(){
    char letter;
    printf("Enter the letter: ");
    scanf("%c",&letter);
    if(letter>=97 && letter<=122 ){
        printf("you entered a lowercase alphabet");
    }
    else
    printf("Not lowercase");
    return 0;
}