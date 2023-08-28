/*Number pyramid #2 CSBS-07*/
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for(i = 1; i<= n; i++){
        /*Spaces*/
        for(j = 1; j<= n-i; j++){
            printf(" ");
        }
        /*1st part*/
        for(j = i; j>= 1; j--){
            printf("%d ", j);
        }
        for(j = 2; j<= i; j++) {
            printf("%d ", j);
        }
        printf(" \n");
    }
    return 0;
}
