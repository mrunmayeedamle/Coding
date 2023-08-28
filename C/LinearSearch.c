/*Program to search a number in an array and display its position CSBS-07*/
#include <stdio.h>
int main()
{
    int i, n, num;
    int arr[100];
    printf("Enter the size of array: \n");
    scanf("%d", &n);

    printf("Enter the elements: \n");
    for(i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be searched: \n");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if(arr[i] == num)
          {
           printf("%d is found at position %d \n", num, i+1);
          break;
          }
    }
    if (i == n) {
        printf("%d is not found in the array \n", num);
    }
    return 0;
}

