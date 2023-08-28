/*Calculating sum of numbers from 1 to n CSBS-07*/
#include <stdio.h>
int main()
{
    int i, n, Sum;
    Sum = 0;
    printf("Enter the value of number till which sum is required: \n");
    scanf("%d", &n);
    /*While Loop*/
    i = 1;
    while(i <= n) {
        Sum += i;
        i++;
    }
    printf("The sum from 1 to %d is : %d", n, Sum);
    return 0;
}
