/*Number pyramid CSBS-07*/
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for(i = 1; i<= n; i++){
        /*spaces*/
        for(j = 1; j<=n-i; j++) {
            printf(" ");
        }
        /*stars*/
        for(j = 1; j<=i; j++){
            printf("%d ", i);
        }
        printf(" \n");
    }
    return 0;
}
