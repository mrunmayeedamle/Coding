/*Calculating Compound Interest*/
#include <stdio.h>
#include <math.h>
int main()
{
    float P, R, T, CI, A;
    printf("Enter the values of Principal, Rate and Time: \n");
    scanf("%f%f%f", &P, &R, &T);
    A = P *pow(1 + (R/100),T);
    CI = (A - P);
    printf("The calculated Compound Interest is: %f \n", CI);
    printf("Amount earned is: %f", A);
    return 0;
}
