/*Checking for palindrome number CSBS-07*/
#include <stdio.h>
int main()
{
    int num, rem, rev, tempr;
    rev = 0;
    printf("Enter the number : \n");
    scanf("%d", &num);
    tempr = num;

    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    if (tempr == rev){
    printf("Number is a palindrome");
    }
    else {
    printf("Number is not a palindrome");
    }
    return 0;
}
