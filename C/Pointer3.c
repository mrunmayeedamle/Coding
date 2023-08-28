/*Pointer 3 CSBS-07*/
#include <stdio.h>
int main()
{
    int a = 20, b = 10;
    int *p, *q;
    p = &a, q = &b;

    //Operations
    printf("%d\n", *p + *q);
    printf("%d\n", *p - *q);
    printf("%d\n", *p * *q);
    printf("%d\n\n", *p / *q);

    printf("%d\n", *(&a) + *q);
    printf("%d\n\n", *p / *(&b));

    printf("%d\n", *p * 2);
    printf("%d\n", *q / 10);
    printf("%d\n", *(&a) * 2);
    printf("%d\n", *(&b) / 10);

    return 0;
}
