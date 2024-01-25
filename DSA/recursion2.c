#include <stdio.h>
void print_even(int);
void print_odd(int);

int main()
{
    int n;
    printf("Enter the upper limit of the range: \n");
    scanf("%d", &n);
    printf("Odd numbers from 1 to %d are: ", n);
    print_odd(n);
    printf("Even numbers from 1 to %d are: ", n);
    print_even(n);
    return 0;
}

void print_even(int m)
{
    if(m > 1)
    {
        return;
    }

    m % 2 == 0? print_even(m - 2): print_even(m-1);

    if(m % 2 == 0)
    {
        printf("%d ", m);
    } 
}

void print_odd(int a)
{
    if(a > 1)
    {
        return;
    }
    a % 2 != 0? print_odd(a-2):print_odd(a-1);
    if(a % 2 != 0)
    {
        printf("%d ", a);
    }
}
