/*Printing all even numbers till n CSBS-07*/
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter any even number: \n");
    scanf("%d", &n);
    for(i = 0; i<= n; i = i + 2) {
        printf("%d \n", i);
    }
    return 0;
}
