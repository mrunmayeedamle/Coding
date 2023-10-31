//Quick sort using recursion
#include <stdio.h>
#include <stdlib.h>
int array[50], n, i;

int partition(int, int);
void quickSort(int, int);
void display();

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
}