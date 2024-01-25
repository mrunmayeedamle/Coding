/*Printing the Fibonacci Series CSBS-07*/
#include <stdio.h>
int main()
{
    int a, b, c, i, num;
    a = 0;
    b = 1;
    printf("Enter the number of sequence to be printed: \n");
    scanf("%d", &num);
    printf("%d %d ", a, b);
    for(i = 2; i<=num; i++){
        c = (a + b);
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
