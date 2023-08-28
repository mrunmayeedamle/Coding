/*Swapping numbers*/
#include <stdio.h>
int main()
{
    int a, b, temp;
    a = 12, b = 24;
    printf("Values before swapping are :%d %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Values after swapping are: %d %d", a, b);
    return 0;
}
