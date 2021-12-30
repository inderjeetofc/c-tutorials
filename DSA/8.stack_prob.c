// q.infix to postfix using stack problem
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct stackDataType
{
    int size;
    int top;
    char *arr;
} stack;
int isOperator(char ch)
{
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}
int pre(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}
int push(stack **ptr, char ch)
{
    (*ptr)->top++;
    (*ptr)->arr[(*ptr)->top] = ch;
    return (*ptr)->top;
}
char pop(stack **ptr)
{
    char temp = (*ptr)->arr[(*ptr)->top];
    (*ptr)->top--;
    return temp;
}
int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}
void convPost(char *chArr)
{
    stack *s;
    s = (stack *)malloc(sizeof(stack));
    s->size = 20;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *post;
    post = (char *)malloc((strlen(chArr) + 1) * sizeof(char));
    int i = 0, j = 0;
    for (i = 0; chArr[i] != '\0'; i++)
    {
        if (!isOperator(chArr[i]))
        {
            post[j] = chArr[i];
            j++;
        }
        else
        {
            if (pre(chArr[i]) > pre(s->arr[s->top]))
            {
                push(&s, chArr[i]);
            }
            else
            {
                while (pre(chArr[i]) <= pre(s->arr[s->top]) && s->top != -1)
                {
                char temp = pop(&s);
                post[j] = temp;
                j++;
                }
                push(&s, chArr[i]);
            }
        }
    }
    while (!isEmpty(s))
    {
        char temp = pop(&s);
        post[j] = temp;
        j++;
    }
    post[j] = '\0';
    printf("\n\nYour postfix expression is : - ");
    for (int k = 0; post[k] != '\0'; k++)
    {
        printf("%c", post[k]);
    }
}

int main()
{
    char *chArr;
    int i;
    char ch;
    printf("\nEnter infix expression: - ");
    for (i = 0; ch != '\n'; i++)
    {
        scanf("%c", &ch);
        chArr[i] = ch;
    }
    chArr[--i] = '\0';
    printf("\nExpression you entered is : - ");
    for (int i = 0; chArr[i] != '\0'; i++)
    {
        printf("%c", chArr[i]);
    }
    convPost(chArr);
    return 0;
}