/* Finding the largest of 3 numbers CSBS-07 */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the values of any 3 numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b)
    {
        if (a > c)
            printf("%d is the greatest number.", a);
            else
            printf("%d is the greatest number.", c);
    }
    else if (b > c)
            printf("%d is the greatest number.", b);
            else
            printf("%d is the greatest number.", c);
    return 0;
}
