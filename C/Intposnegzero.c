/*Checking if given number is +ve, -ve or zero CSBS-07*/
#include <stdio.h>
int main()
{
    int X;
    printf("Enter any number: \n");
    scanf("%d", &X);
    if(X >= 0) {
            if(X == 0) {
                printf("Number %d is zero", X);
            }
            else
                printf("Number %d is positive", X);
    }
    else {
            if (X < 0)
        printf("Number %d is negative", X);
        return 0;
    }
}
