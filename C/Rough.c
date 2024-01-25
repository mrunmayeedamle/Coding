#include <stdio.h>
int *arr_fun(int*);

int main()
{
    int *array;
    int a[10];
    int i;
    array = arr_fun(a);
    printf("Elements are: \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}

int *arr_fun(int *arr)
{
    int i, n = 5;
    printf("Enter the elements: \n");
    for(i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}