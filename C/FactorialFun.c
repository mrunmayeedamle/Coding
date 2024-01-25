/*Calculating factorial using functions CSBS-07*/
#include <stdio.h>
long Calc_Factorial(int);

int main()
{
  long factorial, fac;
  factorial = Calc_Factorial(fac);
  printf("The factorial is %ld", factorial);
  return 0;
}

long Calc_Factorial(int fac)
{
    int i, n;
    long f = 1;
    printf("Enter the number whose factorial needs to be calculated: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        f = f * i;
    }
    return f;
}
