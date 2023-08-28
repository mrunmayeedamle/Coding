/*Pointers 1 CSBS-07*/
#include <stdio.h>
int main()
{
    int i = 345;
    float f = 23.78;
    char c = '&';
    int *ip;
    float *fp;
    char *cp;
    ip = &i;
    fp = &f;
    cp = &c;

    //Prints the values
    printf("%d \n", i);
    printf("%f \n", f);
    printf("%c \n\n", c);

    //Points to the value
    printf("%d \n", *ip);
    printf("%f \n", *fp);
    printf("%c \n\n", *cp);

    //Prints the address
    printf("%u \n", ip);
    printf("%u \n", fp);
    printf("%u \n", cp);

    return 0;
}
