/*Calculating Area of Rectangle CSBS-07*/
#include <stdio.h>
int main()
{
    int l, b, Area;
    printf("Enter the length and breadth of rectangle: \n");
    scanf("%d%d", &l, &b);
    Area = (l * b);
    printf("Area of rectangle is: %d",Area);
    return 0;
}
