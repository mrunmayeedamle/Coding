/*Finding the sum of digits using functions CSBS-07*/
#include <stdio.h>
int Sum_Digits(int);

int main()
{
    int s, m;
    m = Sum_Digits(s);
    printf("The sum of digits of number is %d.", m);
    return 0;
}

int Sum_Digits(int s)
{
    int n, rem, sum;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(sum = 0; n != 0; n = n/10)
    {
    rem = n % 10;
    sum = sum + rem;
    }
    return sum;

}
