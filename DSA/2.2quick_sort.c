//Quick sort using recursion
#include <stdio.h>
#include <stdlib.h>
int array[50], n, i, j, temp;

int partition(int, int);
void quickSort(int, int);

int main()
{
    printf("Enter the number of elements you want to enter: \n");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Array before sorting: [");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");

    quickSort(0, n-1);

    printf("Array after sorting: [");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");

    return 0;
}

int partition(int l, int h)
{
    int pivot = array[h]
    ;
    i = (l - 1);

    for(j = l; j <= h - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] =  temp;
        }
        
    }
    temp = array[i+1];
    array[i+1] = array[h];
    array[h] = temp;

    return(i+1);
}

void quickSort(int low, int high)
{
    if(low < high)
    {
        int pi = partition(low, high);
        quickSort(low, pi-1);
        quickSort(pi+1, high);
    }
}