// #include<stdio.h>

// int main(){
//     char name[20];
//     printf("Enter your name: \n");
//     scanf("%s",name);
//     printf("your name is : %s",name);
//     return 0;
// }
// #include<stdio.h>

// int main(){
//     char *ptr="hola";
//     // puts(ptr);
//     printf("%s",ptr);
//     return 0;
// }

//program to take strings by %c and %s
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[52], charStr[52], c;
//     printf("Enter string : ");
//     int i = 0;
//     while (c != '\n')
//     {
//         scanf("%c", &c);
//         printf("%c",c);
//         charStr[i] = c;
//         printf("%c",charStr);
//         i++;
//     }
//     // for(int j=0;j<strlen(charStr);j++){
//     //     printf("%d\n",charStr[j]);
//     // }
//     printf("%d",i);
//     i = i - 2;
//     // str[i] = '\0';
//     printf("%s", charStr);
//     printf("%d", strlen(charStr));
//     printf("\nNow enter the same string : ");
//     scanf("%s", str);
//     printf("%s", str);
//     printf("%d", strlen(str));
//     printf("\n%d", strcmp(charStr, str));
//     if (strcmp(charStr, str) > 0)
//     {
//         puts("both strings are not equal : returns 1");
//     }
//     else if (strcmp(charStr, str) < 0)
//     {
//         puts("both strings are not equal : returns -1");
//     }
//     else
//         puts("both strings are equal");

//     return 0;
// }

//function to imitate strlen behavior
// #include <stdio.h>
// int strlength(char *ptr)
// {
//     int length=0,i=0;
//     // printf("%c",*(ptr+i));
//     // while(*ptr[i]!='\0'){
//     //     length++;
//     //     i++;
//     // }
//     for(int i=0;*(ptr+i)!='\0';i++){
//         length++;
//     }
//     return length;
// }
// int main()
// {
//     char str[52];
//     printf("Enter string : ");
//     gets(str);
//     int len = strlength(&str[0]);
//     printf("the length of string is :%d", len);
//     return 0;
// }

//function to slice a string
// #include <stdio.h>
// void slice(char *ptr,int m,int n){
//     char c;
//     int i;
//     for(i=0;i<n-m+1;i++){
//         c=*(ptr+m+i);
//         // printf("%c",c);
//         *(ptr+i)=c;
//     }
//     *(ptr+i)='\0';
// }
// int main()
// {
//     char str[50];
//     int m,n;
//     printf("Enter string :");
//     gets(str);
//     printf("Enter slice positions: ");
//     scanf("%d %d",&m,&n);
//     slice(str,m,n);
//     puts(str);
//     return 0;
// }

// function to clone strcpy

// #include <stdio.h>
// // #include <string.h>
// void copyString(char *ptr1, char *ptr2)
// {
//     int i;
//     for (i = 0; *(ptr1 + i) != '\0'; i++)
//     {
//         *(ptr2 + i) = *(ptr1 + i);
//     }
//     printf("%d", i);
// }

// int main()
// {
//     char str1[20], str2[10];
//     puts("Enter your string : ");
//     gets(str1);
//     copyString(str1, str2);
//     // strcpy(str2,str1);
//     printf("\nYour string is : %s",str2);
//     return 0;
// }

// function to encrypt and decrypt string by adding one to its ascii chars

// #include <stdio.h>
// void encryptStr(char *ptr)
// {
//     //with for loop increment i
//     // char str2[20];
//     // for (int i = 0; *(ptr + i) != '\0'; i++)
//     // {
//     //     *(ptr+i) = *(ptr + i) + 1;
//     //     // printf("\n", str2[i]);
//     // }

//     //with while loop increment ptr
//     while (*ptr != '\0')
//     {
//         *ptr = *ptr + 1;
//         // printf("%c", *ptr);
//         ptr++;
//     }
// }
// void decryptStr(char *ptr)
// {
//     for (int i = 0; *(ptr + i) != '\0'; i++)
//     {
//         *(ptr + i) = *(ptr + i) - 1;
//     }
// }
// int main()
// {
//     char str[20];
//     printf("Enter string to encrypt it : ");
//     gets(str);
//     encryptStr(str);
//     puts("\nYour encrypted string is : ");
//     puts(str);
//     decryptStr(str);
//     puts("\nYour decrypted string is : ");
//     puts(str);
//     return 0;
// }

//fucntion to count occurence of a char in string
// #include <stdio.h>
// int countChar(char str1[], char cha)
// {
//     int count = 0;
//     for (int i = 0; str1[i] != '\0'; i++)
//     {
//         if (str1[i] == cha)
//             count++;
//     }
//     return (count);
// }
// int main()
// {
//     char str[20], ch;
//     int count;
//     puts("Enter string to count char : ");
//     gets(str);
//     puts("\nEnter char to count : -");
//     scanf("%c", &ch);
//     count = countChar(str, ch);
//     printf("\nTotal %c in the string is : %d ", ch, count);
//     return 0;
// }

// function to check if given char is present in string or not !
//ptr is used as an array in the function
// #include <stdio.h>
// void checkChar(char *str1, char cha)
// {
//     int count = 0;
//     for (int i = 0; str1[i] != '\0'; i++)
//     {
//         if (str1[i] == cha)
//             count++;
//     }
//     if (count == 0)
//     {
//         printf("\nNo! '%c' char is not present in string ", cha);
//     }
//     else
//         printf("\n'%c' char is present in string %d times ", cha, count);
// }
// int main()
// {
//     char str[20], ch;
//     puts("Enter string: ");
//     gets(str);
//     puts("\nEnter char to check : ");
//     scanf("%c", &ch);
//     // gets(ch); // running this would give coree dump error as this is used on a string and not on char
//     checkChar(str, ch);
//     return 0;
// }


//to check that array cant be initialised str="hola"
// #include<stdio.h>

// int main(){
//     // char str[10];
//     int arr[10]={1,2,3,4,5};
//     printf("%d",arr);
//     printf("\n%d",&arr[0]);
//     return 0;
// }