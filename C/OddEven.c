/*Calculating even odd numbers in an array CSBS-07*/
#include <stdio.h>
int main()
{
    int Arr[100], i, n, odd = 0, even = 0;
    printf("Enter the number of elements in array: \n");
    scanf("%d", &n);

    printf("Enter %d numbers: \n", n);
    for(i= 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }
    for(i = 0; i <n; i++)
    {
        if(Arr[i] % 2 == 0) {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even elements: %d \n", even);
    printf("Number of odd elements: %d \n", odd);
    return 0;
}
