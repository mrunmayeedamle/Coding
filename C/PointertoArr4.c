/*Pointer to String 4 CSBS-07*/
#include <stdio.h>
int main()
{
    int s[10] = {'m','r','u','n','m','a','y','e','e','\0'}, i;
    int *m;
    m = s;

    printf("Address: \n");
    for(i = 0; i <9; i++) {
        printf("%u \n", m);
        m++;
    }

    printf("String: \n"); // method 1
    for(i = 0; i < 9; i++) {
        printf("%c \t", s[i]);
    }

    printf("String: \n"); // method 2
    for(i = 0; i < 9; i++) {
        printf("%c \t", *(s+i));
    }
    return 0;
}
