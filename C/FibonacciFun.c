/*Fibonacci numbers using Function CSBS-07*/
#include <stdio.h>
void Fib_seq(int);

int main()
{
    int n;
    printf("Enter the number till which sequence is required: \n");
    scanf("%d", &n);
    Fib_seq(n);
    return 0;
}

void Fib_seq(int n)
{
    int i, a, b, c;
    a = 0, b = 1;
    printf("%d %d ",a, b);
    for(i = 2; i<=n; i++){
        c = (a + b);
        printf("%d ", c);
        a = b;
        b = c;
    }
}
