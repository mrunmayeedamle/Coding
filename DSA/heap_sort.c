#include <stdio.h>
int array[50], n, i;

void max_heapify(int);
void heap_sort();

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

    heap_sort();

    printf("Array after sorting: [");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");
    return 0;
}

void max_heapify(int j)
{
    int largest = j;  //largest node

    int left = 2 * i + 1;  //left node
    int right = 2 * i + 2;  //right node

    if(left < n && array[left] > array[largest])
    {
        largest = left;
    }
    if(right < n && array[right] > array[largest])
    {
        largest = right;
    }
    if(largest)
}
