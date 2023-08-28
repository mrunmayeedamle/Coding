/*Reversing a number CSBS-07*/
#include <stdio.h>
int main()
{
    int num, rem, rev;
    rev = 0;
    printf("Enter the number to be reversed: \n");
    scanf("%d", &num);

    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    printf("The reverse is %d.",rev);
    return 0;
}
