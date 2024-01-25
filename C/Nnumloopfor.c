/*Printing the sum of numbers from 1 to n CSBS-07*/
#include <stdio.h>
int main()
{
    int i, n, Sum;
    Sum = 0;
    printf("Enter the value of number till which the sum is required : \n");
    scanf("%d", &n);
    /*for loop*/
    for(i = 1; i<= n; ++i) {
        Sum = (Sum + i);
    }
    printf("Sum from 1 to %d is : %d", n, Sum);
    return 0;
}
