/* String Length Operation CSBS-07*/

#include <stdio.h>
#include <string.h>


int main()
{
    int n;
    char a[20];
    char b[20] = "Manisha";
    char c[20] = {'M','A','N','D','A','R','\0'};
    printf("Enter the string: \n");
    scanf("%s", a);


    printf("String Length: \n\n");
    printf("Length of %s is: %d \n", a, strlen(a));
    printf("Length of %s is: %d \n", b, strlen(b));
    printf("Length of %s is: %d ", c, strlen(c));

    return 0;

}
