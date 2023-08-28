/*Pointer 4 CSBS-07*/
#include <stdio.h>
int main()
{
    //even if *ip, *fp, *cp contain address they display
    // the value they point to.
    int i = 987, *ip = &i;
    float f = 12.67, *fp = &f;
    char c = '%', *cp = &c;

    printf("Before increment: \n");
    printf("%u %u %u \n", ip, fp, cp);
    printf("%d %f %c \n", *ip, *fp, *cp);

    ip++;
    fp++;
    cp++;

    printf("After increment: \n");
    printf("%u %u %u \n", ip, fp, cp);

    return 0;
}
