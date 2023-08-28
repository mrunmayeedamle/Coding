/*Checking if given number is palindrome or not CSBS-07*/
#include <stdio.h>
int Check_Palindrome(int);

int main()
{
    int x, m;
    m = Check_Palindrome(x);
    if (m == 1) {
        printf("The number is a palindrome number.");
    }
    else {
        printf("The number is not a palindrome number.");
    }
    return 0;
}

int Check_Palindrome(int x)
{
    int n, rem, rev, tempr;
    rev = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);
    tempr = n;
    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (tempr == rev) {
        return 1;
    }

}
