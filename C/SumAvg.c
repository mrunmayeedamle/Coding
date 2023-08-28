/*Calculating sum and average of arrays CSBS-07*/
#include <stdio.h>
int main()
{
    int Arr[100], i, n, sum = 0;
    printf("Enter the number of elements in array: \n");
    scanf("%d", &n);

    printf("Enter %d numbers: \n", n);
    for(i= 0; i < n; i++) {
            scanf("%d", &Arr[i]);
            sum = sum + Arr[i];
    }
    printf("Sum of integers is %d.\n", sum);
    printf("Average of integers is %.4f.",(float)sum/n);
    return 0;
}
