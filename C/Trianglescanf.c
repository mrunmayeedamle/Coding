/*Calculating Area of triangle CSBS-07*/
#include <stdio.h>
int main()
{
    int b, h, Area;
    printf("Enter the values of base and height:\n");
    scanf("%d%d", &b, &h);
    Area = (0.5 * b * h);
    printf("The area of triangle is :%d", Area);
    return 0;
}
