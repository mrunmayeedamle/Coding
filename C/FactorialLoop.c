/*Calculating the factorial of user entered number CSBS-07*/
#include <stdio.h>
int main()
{
    int i, factorial, num;
    factorial = 1;
    printf("Enter the number for which factorial is required: \n");
    scanf("%d", &num);

    for(i = 1; i<= num; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is %d", num, factorial);
    return 0;
}
