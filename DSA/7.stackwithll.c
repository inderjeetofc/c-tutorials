// #include <stdio.h>
// #include <stdlib.h>
// typedef struct stackWithLLDT
// {
//     int data;
//     struct stackWithLLDT *next;
// } stack;
// void show(stack *ptr)
// {
//     printf("\nELememts of stack are:-");
//     while (ptr != NULL)
//     {
//         printf("\n%d", ptr->data);
//         ptr = ptr->next;
//     }
// }
// int isEmpty(stack *ptr)
// {
//     if (ptr == NULL)
//     {
//         printf("\nstack is Empty");
//         return 1;
//     }
//     return 0;
// }
// int isFull()
// {
//     stack *n;
//     n = (stack *)malloc(sizeof(stack));
//     if (n == NULL)
//     {
//         printf("\nstack is Full");
//         return 1;
//     }
//     return 0;
// }
// stack *push(stack *ptr, int val)
// {
//     if (isFull() == 1)
//     {
//         isFull();
//         return ptr;
//     }
//     else
//     {
//         stack *dummy;
//         dummy = (stack *)malloc(sizeof(stack));
//         dummy->data = val;
//         dummy->next = ptr;
//         ptr = dummy;
//         return (ptr);
//     }
// }
// stack *pop(stack *ptr)
// {
//     if (isEmpty(ptr) == 1)
//     {

//         isEmpty(ptr);
//         return ptr;
//     }
//     else
//     {
//         stack *temp = ptr;
//         ptr = ptr->next;
//         free(temp);
//         show(ptr);
//         return (ptr);
//     }
// }
// int peek(stack *ptr, int pos)
// {
//     for (int i = 1; i < pos; i++)
//     {
//         if (ptr->next == NULL)
//         {
//             printf("\nInvalid index for peek !");
//             return 0;
//         }
//         ptr = ptr->next;
//     }
//     printf("\nElement you peeked is %d", ptr->data);
//     return (ptr->data);
// }
// int isTop(stack *ptr)
// {
//     return (ptr->data);
// }
// int isBottom(stack *ptr)
// {
//     while (ptr->next != NULL)
//     {
//         ptr = ptr->next;
//     }
//     return (ptr->data);
// }
// int main()
// {
//     stack *top = NULL;
//     // *second, *third, *fourth, ;
//     int val;
//     // top = (stack *)malloc(sizeof(stack));
//     // second = (stack *)malloc(sizeof(stack));
//     // third = (stack *)malloc(sizeof(stack));
//     // fourth = (stack *)malloc(sizeof(stack));
//     // top->data = 96;
//     // top->next = second;
//     // second->data = -45;
//     // second->next = third;
//     // third->data = 1;
//     // third->next = fourth;
//     // fourth->data = 75;
//     // fourth->next = NULL;
//     show(top);
//     printf("\nEnter value you want to push : -");
//     scanf("%d", &val);
//     top = push(top, val);
//     show(top);
//     printf("\nEnter value you want to push : -");
//     scanf("%d", &val);
//     top = push(top, val);
//     show(top);
//     printf("\nEnter value you want to push : -");
//     scanf("%d", &val);
//     top = push(top, val);
//     show(top);
//     printf("\nEnter value you want to push : -");
//     scanf("%d", &val);
//     top = push(top, val);
//     show(top);
//     printf("\nEnter value you want to push : -");
//     scanf("%d", &val);
//     top = push(top, val);
//     show(top);
//     printf("\nEnter value you want to push : -");
//     scanf("%d", &val);
//     top = push(top, val);
//     show(top);
//     printf("\nEnter value you want to push : -");
//     scanf("%d", &val);
//     top = push(top, val);
//     show(top);
//     printf("\nEnter value you want to push : -");
//     scanf("%d", &val);
//     top = push(top, val);
//     show(top);
//     val = isTop(top);
//     printf("\nElement at the top is :- %d", val);
//     val = isBottom(top);
//     printf("\nElement at the bottom is :- %d", val);
//     val = peek(top, 13);
//     top = pop(top);
//     top = pop(top);
//     top = pop(top);
//     top = pop(top);
//     top = pop(top);
//     top = pop(top);
//     return 0;
// }

// q.parenthesis counting prob solve using stack (using char array) (multi parenthesis prob)

#include <stdio.h>
#include <stdlib.h>
typedef struct stackDataType
{
    int size;
    int top;
    char *arr;
} stack;

int isFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}
int isEmpty(stack *ptr)
{
    if (ptr->top <= -1)
        return 1;
    else
        return 0;
}
int push(stack *ptr, char bracket)
{
    if (isFull(ptr))
    {
        printf("\nStack overflow");
        return ptr->top;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = bracket;
        return ptr->top;
    }
}
int popBracket(stack *ptr, char bracket, char ch)
{
    printf("\n i am brakcet %c %c", bracket, ch);
    if (ch - bracket == 1 || ch - bracket == -1 || ch - bracket == -2 || ch - bracket == 2)
    {
        pop(ptr);
        return 1;
    }
    else
        return 0;
}
int pop(stack *ptr)
{
    // if (isEmpty(ptr))
    // {
    //     printf("\nStack is empty ! Expression is unbalanced");
    //     return ptr->top;
    // }
    // else
    // {
    char *temp = &ptr->arr[ptr->top];
    ptr->top--;
    return (ptr->top);
    free(temp);
    // }
}
void parenthesisCheck(stack *ptr, char *arrPtr)
{
    int count = 0, i;
    for (i = 0; arrPtr[i] != '\0'; i++)
    {
        if (arrPtr[i] == '(' || arrPtr[i] == '{' || arrPtr[i] == '[')
        {
            ptr->top = push(ptr, arrPtr[i]);
            count++;
        }
        else if (arrPtr[i] == ')' || arrPtr[i] == '}' || arrPtr[i] == ']')
        {
            if (isEmpty(ptr))
            {
                count--;
                printf("\nParenthesis are not matching");
                break;
            }
            else
            {
                // ptr->top = pop(ptr);
                int temp = popBracket(ptr, ptr->arr[ptr->top], arrPtr[i]);
                if (!temp)
                {
                    printf("\nParenthesis are not matching");
                    break;
                }
                else
                    count--;

                // count--;
            }
        }
    }
    if (arrPtr[i] == '\0' && ptr->top != -1 && count != 0)
    {
        // printf("\nStack has %d ( parenthesis left to be balanced ! Expression is unbalanced", count);
        printf("\nStack has parenthesis left to be balanced ! Expression is unbalanced");
    }
    else if (arrPtr[i] == '\0' && ptr->top <= -1 && count != 0)
        // printf("\nStack has %d ) parenthesis left to be balanced ! Expression is unbalanced", -count);
        printf("\nStack has parenthesis left to be balanced ! Expression is unbalanced");
    // else
    //     printf("\nParenthesis are perfectly matching !");
    if (count == 0)
    {
        printf("\nParenthesis are perfectly matching");
    }
}
int main()
{
    stack *s;
    char *chArr;
    s = (stack *)malloc(sizeof(stack));
    s->size = 25;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    chArr = (char *)malloc(10 * sizeof(char));
    printf("\nEnter expression to check parenthesis : -");
    int i;
    char ch;
    for (i = 0; ch != 10; i++)
    {
        scanf("%c", &ch);
        chArr[i] = ch;
    }
    chArr[i] = '\0';
    for (i = 0; chArr[i] != '\0'; i++)
    {
        printf("%c", chArr[i]);
    }

    parenthesisCheck(s, chArr);
    return 0;
}