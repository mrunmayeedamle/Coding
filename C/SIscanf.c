/* Calculating Simple Interest CSBS-07*/
#include <stdio.h>
int main ()
{
    int P, R, T, SI;
    printf("Enter the principal, Rate and Time :\n");
    scanf("%d%d%d", &P, &R, &T);
    SI = (P * R * T)/100;
    printf("The calculated Simple Interest is :%d", SI);
    return 0;
}
