#include <stdio.h>

int main()
{
    int array[50], i, j, n, temp;
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

    for(i = 0; i < n -1; i++)
    {
        for(j = 0; j < n - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            else
            {
                continue;
            }
        }
    }
    printf("Array after sorting: [");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");
    return 0;
}