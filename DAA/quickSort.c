#include <stdio.h>
#include <stdlib.h>

int swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j<=high-1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high)
{
    int pi;
    while(low < high)
    {
        pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }

    
}

void printArray(int arr[], int n)
{
    for(int i = 0; i< n; i++)
    {
        printf("%d ", &arr[i]);
    }
    printf("]");
}

int main()
{
    int num;
    int array[50];
    printf("Enter the number of elements you want to add in an array: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        printf("Enter %d element: \n", i+1);
        scanf("%d", &array[i]);
    }
    printf("Unsorted array:[");
    printArray(array, num);

    quickSort(array, 0, num-1);
    
    printf("Sorted array:[");
    printArray(array, num);

    return 0;
}
