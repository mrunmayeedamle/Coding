/* Calculating X^n CSBS-07*/
#include <stdio.h>
#include <math.h>
int main()
{
    int X, n, Ans;
    printf("Enter the values of base(X) and power(n): \n");
    scanf("%d%d", &X, &n);
    Ans = pow((X),n);
    printf("The answer to X^n is: %d", Ans);
    return 0;
}
