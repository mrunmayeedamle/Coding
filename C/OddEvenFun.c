/*Checking if given number is odd or even CSBS-07*/
#include <stdio.h>
int Odd_Even(int);

int main()
{
    int m, x;
    m = Odd_Even(x);
    if(m == 1) {
        printf("It is an even number");
    }
    else if (m == 2) {
        printf("It is an odd number");
    }
    else {
        printf("Invalid");
    }
    return 0;
}

int Odd_Even(int x)
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    if (n % 2 == 0) {
        return 1;
    }
    else {
        return 2;
    }
}
