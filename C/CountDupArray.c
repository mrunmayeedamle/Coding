/*Count duplicates in an array*/
#include <stdio.h>

int main()
{
    int array[20], i, j, n, count = 0;

    printf("Enter the number of elements to be feed in the array:\n");
    scanf("%d",&n);

    printf("Enter the elements in the array: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(array[i]== array[j])
                count++;
        }
        printf("The element %d is repeated %d times. \n", array[i], count - 1);
        count = 0;
    }
    return 0;
}
