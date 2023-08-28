/*Printing all -ve numbers in an array CSBS-07*/
#include <stdio.h>
int main()
{
    int i, n, array[100], a;
    printf("Enter the size of array: \n");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for(i = 0; i< n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("No. of Negative numbers in the array are: \n");
    for (i = 0; i< n; i++)
    {
        if(array[i] < 0)
        {
            a++;
        }
    }
    printf("%d \n", a);

    printf("Negative numbers in the array are: ");
    for (i = 0; i< n; i++)
    {
        if(array[i] < 0)
        {
            printf("%d ", array[i]);
        }
    }
    return 0;
}
