// #include <stdio.h>
// #include <stdlib.h>
// typedef struct stackDataType
// {
//     int size;
//     int top;
//     int *arr;
// } stack;
// int isEmpty(stack *ptr)
// {
//     if (ptr->top == -1)
//         return -1;
//     return 0;
// }
// int isFilled(stack *ptr)
// {
//     if (ptr->top >= ptr->size - 1)
//         return 1;
//     return 0;
// }
// int push(stack *ptr)
// // int push(int val)
// {
//     int check = isFilled(ptr);
//     if (check == 0)
//     {
//         //push n numbers in stack

//         int n;
//         printf("\nHow many elements you want to insert in the array(<50) ?");
//         scanf("%d", &n);
//         for (int i = ptr->top; i < ptr->top-n-1 || ptr->top<ptr->size-1||i<n-1-ptr->top; i++)
//         {
//             ptr->top++;
//             printf("\nEnter element %d = ", i + 2);
//             scanf("%d", &ptr->arr[i]);
//         }
//         return (ptr->top);
//     }
//     else
//         printf("\nStack overFlow! cannot add more elements");
//     return ptr->top;
// }
// int pop(stack *ptr)
// {
//     int check = isEmpty(ptr);
//     if (check == 0)
//     {
//         int n, i;
//         printf("\nEnter number of elements to remove :-");
//         scanf("%d", &n);
//         for (i = ptr->top; i > ptr->top - n; i--)
//         {
//             printf("\nElement removed is %d", ptr->arr[i]);
//             // free(ptr->arr+i);
//         }
//         ptr->top = i;
//         return (1);
//     }
//     else
//         printf("\nStack is empty!cannot pop more elements");
//     return 0;
// }
// int showArr(stack *ptr)
// {
//     int i = ptr->top;
//     while (i != -1)
//     {
//         printf("\n%d", ptr->arr[i]);
//         i--;
//     }
//     return 1;
// }
// int main()
// {
//     stack s;
//     int status;
//     s.size = 10;
//     s.top = -1;
//     s.arr = (int *)malloc(s.size * sizeof(int));
//     status = push(&s);
//     printf("Total elements filled are %d and position of top is %d", s.top + 1, s.top);
//     showArr(&s);
//     printf("\nPosition of top after display is %d", s.top);
//     status = pop(&s);
//     printf("\nPosition of top after removal is %d", s.top);
//     showArr(&s);
//     printf("\nPosition of top after display is %d", s.top);
//     status = push(&s);
//     printf("Total elements filled are %d and position of top is %d", s.top + 1, s.top);
//     showArr(&s);

//     return 0;
// }

//method to push and pop single element
#include <stdio.h>
#include <stdlib.h>
typedef struct stackDataType
{
    int size;
    int top;
    int *arr;
} stack;
int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}
int isFilled(stack *ptr)
{
    if (ptr->top >= ptr->size - 1)
        return 1;
    return 0;
}
void push(stack *ptr, int val)
{
    if (isFilled(ptr))
        printf("\nStack is full !cannot push %d to the stack.", val);
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nStack is empty !cannot pop from the stack.");
        return 0;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return (val);
    }
}
int peek(stack *ptr, int pos)
{
    if (ptr->top - pos + 1 < 0)
    {
        printf("\nInvalid position");
        return -1;
    }
    return (ptr->arr[ptr->top - pos + 1]);
}
int stackTop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nStack is empty !No top element exist");
    }
    else
        return (ptr->arr[ptr->top]);
}
int stackBottom(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nStack is empty !No bottom element exist");
    }
    else
        return (ptr->arr[0]);
}
int main()
{
    stack *s;
    // int val;
    s = (stack *)malloc(sizeof(stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("\nStack before push filled :%d", isFilled(s));
    printf("\nStack before push empty :%d", isEmpty(s));
    push(s, -3);
    push(s, 8);
    push(s, 7);
    push(s, 3);
    push(s, 7);
    push(s, 4);
    push(s, 53);
    push(s, 1);
    int val = pop(s);
    printf("\nvalue popped is :%d", val);
    val = pop(s);
    printf("\nvalue popped is :%d", val);
    val = pop(s);
    printf("\nvalue popped is :%d", val);
    val = pop(s);
    printf("\nvalue popped is :%d", val);
    val = peek(s, 3);
    printf("\nThe element you peeked is:%d", val);
    // push(s, 12);
    // push(s, 89);
    // push(s, 82);
    // push(s, 52);

    printf("\nStack after push filled :%d", isFilled(s));
    printf("\nStack after push empty :%d", isEmpty(s));
    val = stackTop(s);
    printf("\nTopmost value of stack is %d", val);
    val = stackBottom(s);
    printf("\nBottom most value of stack is %d", val);
    return 0;
}