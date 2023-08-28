/*Check whether given triangle is valid or not CSBS-07*/
#include <stdio.h>
int main()
{
    int A, B, C, Sum;
    printf("Enter the values of the angle of the triangle: \n");
    scanf("%d%d%d", &A, &B, &C);
    Sum = (A + B + C);
    if(Sum == 180 && A > 0 && B > 0 && C > 0) {
        printf("Given triangle is valid.");
    }
    else
        printf("Given triangle is not valid.");
    return 0;
}
