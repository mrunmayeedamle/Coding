/*Calculating Compound Interest CSBS-07*/
#include <stdio.h>
#include <math.h>
int main()
{
    float P, R, T, CI, A;
    P = 1000, R = 5, T = 2;
    A = P *pow(1 + (R/100),T);
    CI =  A - P;
    printf("The calculated Compound Interest is: %f \n", CI);
    printf("Amount earned is: %f", A);
    return 0;
}
