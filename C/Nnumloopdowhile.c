/*Calculating the sum from 1 to n CSBS-07*/
#include <stdio.h>
int main()
{
    int i, n, Sum;
    Sum = 0;
    printf("Enter the number till which the sum is required: \n");
    scanf("%d", &n);
    i = 1;
    /*DoWhile loop*/
    do{
        Sum += i;
        i++;
    }
    while(i <= n);
    printf("The sum from 1 to %d is : %d", n, Sum);
    return 0;
}
