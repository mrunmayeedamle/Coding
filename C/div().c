/*Function with no arguments, return type CSBS-07*/
#include <stdio.h>
float div();

int main()
{
    float d;
    d = div();
    printf("The quotient is %.3f.", d);
    return 0;
}

float div()
{
    float p, q, r;
    printf("Enter any two numbers: \n");
    scanf("%f%f", &p, &q);
    r = (p / q);
    return r;
}
