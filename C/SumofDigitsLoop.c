/*Calculating the sum of digits in an integer CSBS-07*/
#include <stdio.h>
int main()
{
    int num, rem, sum;
    sum = 0;
    printf("Enter the number: \n");

    for(scanf("%d", &num); num != 0; num = num/10) {
        rem = num % 10;
        sum = sum + rem;
    }
    printf(" The sum of digits is %d", sum);
    return 0;
}
