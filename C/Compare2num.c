/*Finding the largest of 2 numbers CSBS-07*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the values of 2 numbers:\n");
    scanf("%d%d", &a, &b);
    if(a > b)
        printf("%d is the greatest number of the two.", a);
    if(b > a)
        printf("%d is the greatest number of the two.", b);
    if(a == b)
        printf("%d & %d are equal", a, b);
    return 0;
}
