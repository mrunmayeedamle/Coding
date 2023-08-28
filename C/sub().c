/*Function with arguments, no return type CSBS-07*/
/*if there is no return, the printf statement is in the called function*/
#include <stdio.h>
void sub(int, int);

int main()
{
    int x, y, z;
    printf("Enter any two numbers: \n");
    scanf("%d%d", &x, &y);
    sub(x,y);
    return 0;
}

void sub(int x, int y)
{
    int z;
    z = (x - y);
    printf("The difference is %d.", z);
}
