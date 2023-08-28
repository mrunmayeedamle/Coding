/*Number triangle pattern CSBS-07*/
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for(i = 1; i<=n; i++) {
        for(j = 1; j<= i; j++) {
            printf("%d", j); /* -> here if we print i we get 1 22 333 4444 but if we print j we get 1 12 123 1234*/
        }
        printf(" \n");
    }
    return 0;
}
