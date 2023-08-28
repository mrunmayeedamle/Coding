/*Copying string CSBS-07*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[10] = "KIT";
    char b[10];
    char c[10];

    strcpy(b,a);
    strcpy(c,"KOLHAPUR");

    puts(b);
    puts(c);

    return 0;
}
