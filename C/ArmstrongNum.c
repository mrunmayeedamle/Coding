/*To check whether given number is an armstrong number or not*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem, n;
    double cube, sum = 0;

    printf("Enter the number to be checked: \n");
    scanf("%d", &num);
    n = num;

    while (num != 0)
    {
        rem = num % 10;
        cube = pow(rem,3);
        sum = sum + cube;
        num = num /10;
    }
    if(sum == n)
    {
        printf("It is an armstrong number.");
    }
    else
    {
        printf("It is not an armstrong number.");
    }
    return 0;
}
