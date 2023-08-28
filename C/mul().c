/*Function with arguments, return type CSBS-07*/
#include <stdio.h>
int mul(int, int);

int main()
{
    int m,i,j;
    printf("Enter any 2 numbers: \n");
    scanf("%d%d", &i, &j);
    m = mul(i, j);
    printf("The product is %d.",m);
    return 0;
}

int mul(int i, int j)
{
    int p;
    p = (i * j);
    return p;
}
