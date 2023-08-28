/* String length operation without string function CSBS-07*/

#include <stdio.h>

int main()
{
    int x, y, z, i;
    x = 0, y = 0, z = 0;
    char a[20];
    char b[20];
    char c[20];

    printf("Enter the string 1: \n");
    scanf("%s",a);

    printf("Enter the string 2: \n");
    scanf("%s",b);

    printf("Enter the string 3: \n");
    scanf("%s",c);


    printf("String Length: \n\n");
    for(i = 0; a[i] != '\0'; i++)
    {
        x++;
    }
    for(i = 0; b[i] != '\0'; i++)
    {
        y++;
    }
    for(i = 0; c[i] != '\0'; i++)
    {
        z++;
    }
    printf("Length of %s is: %d \n", a, x);
    printf("Length of %s is: %d \n", b, y);
    printf("Length of %s is: %d ", c, z);

    return 0;
}
