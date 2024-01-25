/*Pointer to Array 1 CSBS-07*/
#include <stdio.h>
int main()
{
    //pointer variable always takes the value of address
    int a[5] = {45, 46, 75, 96, 15} , i;
    int *p;
    p = a; // even if not stated variable p contains address of array
    // p=&a[0];
    printf("%u \n" , p ); //address
    printf("%d \n", p); // address
    for( i=0; i< 5 ; i++)
        {
            printf("\n%d", *p);
            p++;
    }
    return 0;
}
