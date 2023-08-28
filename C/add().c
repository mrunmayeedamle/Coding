/*Function with no arguments, no return type CSBS-07*/
/*if there is no return, the printf statement is in the called function*/
#include <stdio.h>
void add();

int main()
{
 int Sum;
 add();
 return 0;
}

void add()
{
    int a, b, c;
    printf("Enter any 2 numbers: \n");
    scanf("%d%d", &a, &b);
    c = (a + b);
    printf("The sum is %d.", c);
}
