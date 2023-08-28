/*String Copy w/o string function CSBS-07*/

#include <stdio.h>

int main()
{
    int i, count = 0;
    char a[10];
    char b[10];

    printf("Enter the string: \n");
    scanf("%s", a);

    for(i = 0; a[i] != '\0'; i++)
    {
        count++;
    }

    printf("String 1 before copying: %s .\n", a);

    for(i = 0; i < count; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';

    printf("String 2 after copying: %s . \n", b);

    return 0;
}
