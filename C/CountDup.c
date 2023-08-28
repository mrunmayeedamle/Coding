/*Counting duplicate elements in an array CSBS-07*/
#include <stdio.h>
int main()
{
    int Array[100], i, j, n, count = 0;
    printf("Enter the number of elements in array: \n");
    scanf("%d", &n);

    printf("Enter %d numbers: \n", n);
    for(i= 0; i < n; i++)
    {
        scanf("%d", &Array[i]);
    }
    for(i = 0; i< n; i++)
    {
        for(j = i+1; j< n; j++)
        {
            if (Array[i] == Array[j]) {
                count++;
                break;
            }
        }
    }
    printf("Number of duplicate numbers in an array is: %d", count);
    return 0;
}
