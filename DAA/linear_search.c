//Linear Search

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lin_search(int[], int);

int main()
{
    clock_t begin = clock();

    int array[100], num, i;
    printf("Enter the number of elements you want to search in the array: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &array[i]);
    }

    lin_search(array, num);

    clock_t end = clock();

    double time = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time taken to execute: %f", time);
    return 0;
}

void lin_search(int arr[100], int n)
{
    int temp, j;
    printf("Given array: [ ");
    for(j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("]\n");

    printf("Enter the number you want to search: ");
    scanf("%d", &temp);

    for(j = 0; j < n; j++)
    {
        if (temp == arr[j])
        {
            printf("Element %d is present in the array at %d position. \n", temp, j+1);
            break;
        }
    }
    if(j == n)
    {
        printf("Element %d isn't present in the array. \n", temp);
    }
}
