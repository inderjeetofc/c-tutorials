#include <stdio.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createArr(struct myArray *ptr, int tSize, int uSize)
{
    ptr->total_size = tSize;
    ptr->used_size = uSize;
    ptr->ptr = (int *)malloc(tSize * sizeof(int));
}
void setArr(struct myArray *ptr)
{
    for (int i = 0; i < ptr->used_size; i++)
    {
        printf("\nEnter %d value : ", i);
        scanf("%d", &ptr->ptr[i]);
    }
}
void showArr(struct myArray *ptr)
{
    for (int i = 0; i < ptr->used_size; i++)
    {
        printf("\n%d Element is : - %d", i, ptr->ptr[i]);
    }
}
int main()
{
    struct myArray enrollment, marks;
    printf("\nWe are at createArr now !");
    createArr(&marks, 10, 5);
    printf("\nWe are at setArr now !");
    setArr(&marks);
    printf("\nWe are at setArr now !");
    showArr(&marks);
    return 0;
}