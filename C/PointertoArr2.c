/* Pointer to array 2 CSBS-07*/
#include <stdio.h>
int main()
{
    int m[5] = {10, 20, 30, 40, 50}, i;
    int *p;
    p = m;

    printf("Address: \n");
    for(i = 0; i <5; i++) {
        printf("%u \n", p);
        p++;
    }

    printf("Number: \n");
    for(i = 0; i < 5; i++) {
        printf("%d \n", m[i]);
    }
    return 0;
}
