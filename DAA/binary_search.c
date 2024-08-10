//Binary Search

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bin_search(int[], int);

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

    bin_search(array, num);

    clock_t end = clock();

    double time = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time taken to execute: %f", time);
    return 0;
}

void bin_search(int arr[100], int n)
{
    int temp, i, j, mid, high, low, count;

    low = 0;
    high = n - 1;

    //sorting the array
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //searching
    printf("Given array: [ ");
    for(j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("]\n");

    printf("Enter the number you want to search: ");
    scanf("%d", &temp);

    while(low<=high)
    {
        mid = low + ((high-low)/2);
        if(temp == arr[mid])
        {
            printf("Element %d found at position %d \n", temp, mid+1);
            count++;
            break;
        }
        if(temp < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if(count<=0)
    {
            printf("Element not found in the array.\n");
    }

}
