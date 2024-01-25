/*Pointer 2 CSBS-07*/
#include <stdio.h>
int main()
{
    int n = 78;
    int *p;
    p = &n;

    //Prints values
    printf("%d \n", n);
    printf("%d \n\n", *p);

    //Prints address
    printf("%u \n", p);
    printf("%u \n", &n);
    printf("%u \n", n);

    return 0;
}
