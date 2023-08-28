/*Swapping numbers CSBS-07*/
#include <stdio.h>
int main()
{
    int p, q, temp;
    printf("Enter the values of p and q :\n");
    scanf("%d%d", &p, &q);
    printf("The values before swapping are: %d %d \n", p, q);
    temp = p;
    p = q;
    q = temp;
    printf("Values after swapping are: %d %d", p, q);
    return 0;
}
