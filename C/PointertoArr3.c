/*Pointer to Array 1 CSBS-07*/
#include <stdio.h>
int main()
{
    int a[5] = {45, 46, 75, 96, 15} , i;
    int *p;
    p = a;
    // p=&a[0];
    printf("%u \n" , p ); //address
    printf("%d \n", p); // address
    for( i=0; i< 5 ; i++)
        {
            printf("\n%d", *(p+i));
    }
    return 0;
}
