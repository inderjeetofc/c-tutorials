// //A -program to perfomrinsertion in an array(order of the array dosent matter)
// //B- program to perfom insertion in an array(order of the array matter)

// #include <stdio.h>
// void setArr(int *ptr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("\nEnter %d element : ", i);
//         scanf("%d", ptr + i);
//     }
// }
// int insertArrA(int *ptr, int size, int capacity, int pos, int num)
// {
//     if (size >= capacity)
//     {
//         printf("\nArray is overflowing . Aborting insertion !");
//         return 0;
//     }
//     else
//     {
//         printf("\nNumber %d is inserted at %d position(by mtd A):", num, pos);
//         ptr[size] = ptr[pos];
//         ptr[pos] = num;
//         return 1;
//     }
// }
// int insertArrB(int *ptr, int size, int capacity, int pos, int num)
// {
//     if (size >= capacity)
//     {
//         printf("\nArray is overflowing . Aborting insertion !");
//         return 0;
//     }
//     else
//     {
//         printf("\nNumber %d is inserted at %d position(by mtd B): ", num, pos);
//         for (int i = size; i >= pos; i--)
//         {
//             ptr[i + 1] = ptr[i];
//         }
//         ptr[pos] = num;
//         return 1;
//     }
// }
// void show(int *ptr, int size, int status)
// {
//     //Traversal in array
//     if (status != 0)
//     {
//         for (int i = 0; i < size; i++)
//         {
//             printf("\nElement %d is %d ", i, ptr[i]);
//         }
//     }
//     else
//         printf("\nCannot display array . Request failed");
// }
// int deleteArr(int *ptr, int size, int pos)
// {
//     if (pos >= 0 && !(pos >= size))
//     {
//         printf("\nNumber %d at %d position is deleted : ", *(ptr + pos), pos);
//         for (int i = pos; i < size-1; i++)
//         {
//             ptr[i] = ptr[i + 1];
//         }
//         return 1;
//     }
//     else
//     {
//         printf("\nPosition needs to be >=0 and less than %d", size);
//         return 0;
//     }
// }
// int main()
// {
//     int arr[10], size = 7, capacity, status = 1;
//     setArr(arr, size);
//     show(arr, size, status);
//     // status = insertArrA(arr, size, capacity = 10, 4, 101);
//     // if (status != 0)
//     //     size++;
//     // show(arr, size, status);

//     // status = insertArrB(arr, size, capacity = 5, 3, 1000);
//     // if (status != 0)
//     //     size++;
//     // show(arr, size, status);

//     status = deleteArr(arr, size, 1);
//     if (status != 0)
//         size--;
//     show(arr, size, status);
//     return 0;
// }

//Linear search binary search algo to search an element in array

#include <stdio.h>
void setArr(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d element : ", i);
        scanf("%d", ptr + i);
    }
}
void show(int *ptr, int size, int status)
{
    if (status != 0)
    {
        for (int i = 0; i < size; i++)
        {
            printf("\nElement %d is %d ", i, ptr[i]);
        }
    }
    else
        printf("\nCannot display array . Request failed");
}
int linearSearch(int *ptr, int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == num)
        {
            printf("\nNumber %d is found at position %d .", num, i);
            return 1;
        }
        printf("\nNumber %d not found !", num);
        return 0;
    }
}
int binarySearch(int *ptr, int size, int num)
{
    int start = 0;
    int end = size - 1;
    if (ptr[start] > num || ptr[end] < num)
    {
        printf("\nNumber not found !");
        printf("\nshabaash");
        return 0;
    }
    // while (end - start > 1)
    // {
    //     printf("\nhola");
    //     int mid = (start + end) / 2;
    //     if (ptr[start] == num || ptr[end] == num || ptr[mid] == num)
    //     {
    //         printf("\nNumber found !");
    //         return 1;
    //     }
    //     if (num > ptr[mid])
    //     {
    //         start = mid + 1;
    //     }
    //     if (num < ptr[mid])
    //     {
    //         end = mid - 1;
    //     }
    // }

    //while loop that will end at converge condition only
    while (start <= end)
    {
        printf("\nhola");
        int mid = (start + end) / 2;
        if (ptr[mid] == num)
        {
            printf("\n%d Number found at position %d!", num, mid);
            return 1;
        }
        if (num > ptr[mid])
        {
            start = mid + 1;
        }
        if (num < ptr[mid])
        {
            end = mid - 1;
        }
    }
    printf("\nNumber not found");
    return 0;
    // for (int i = 0; i < size; i++)
    // {
    //     int mid = (start + end) / 2;
    //     if (ptr[start] == num || ptr[end] == num || ptr[mid] == num)
    //     {
    //         printf("\nNumber found !");
    //         return 1;
    //     }
    //     else if (ptr[start] > num || ptr[end] < num || end - start == 2)
    //     {
    //         printf("\nNumber not found !");
    //         return 0;
    //     }
    //     else if (num > ptr[mid])
    //     {
    //         start = mid;
    //     }
    //     else if (num < ptr[mid])
    //     {
    //         end = mid;
    //     }
    // }
}
int main()
{
    int arr[20], num, size = 10, status = 1;
    setArr(arr, size);
    show(arr, size, status);
    // linearSearch(arr, size, 72);
    binarySearch(arr, size, 106);
    return 0;
}

// Element 0 is 1
// Element 1 is 2
// Element 2 is 36
// Element 3 is 54
// Element 4 is 65
// Element 5 is 106
// Element 6 is 110
// Element 7 is 120
// Element 8 is 450
// Element 9 is 520

// 3