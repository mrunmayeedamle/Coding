/*Finding largest number is array and display position CSBS-07*/
#include <stdio.h>
int main()
{
    int i, lim, max, loc = 0;
    int arr[100];
    printf("Enter number of elements in array\n");
    scanf("%d", &lim);

    printf("Enter %d integers\n", lim);
    for(i = 0; i< lim; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];

    for(i = 1; i <lim; i++)
    {
        if (arr[i] > max){
            max = arr[i];
            loc = i+1;
        }
    }
    printf("The largest number in the array is %d and its position is %d", max,loc);
    return 0;
}
