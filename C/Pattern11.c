/* Butterfly Pattern CSBS-07*/
#include<stdio.h>
int main()
{
    int n, sp, i, j;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    /*upper part*/
    for(i= 1;i <=n; i++){
        /*stars*/
        for(j= 1; j <=i; j++){
            printf("*");
        }
        /*spaces*/
         sp = 2 * (n-i);
        for(j= 1; j <=sp; j++){
            printf(" ");
        }
        /*stars*/
        for(j = 1; j<= i; j++){
            printf("*");
        }
        printf(" \n");
    }
    /*lower part*/
    for(i= n; i>= 1; i--){
        /*stars*/
        for(j = 1; j<=i; j++){
            printf("*");
        }
        /*spaces*/
         sp = 2 * (n-i);
        for(j = 1; j<= sp; j++){
            printf(" ");
        }
        /*stars*/
        for(j = 1; j<= i; j++){
            printf("*");
        }
        printf(" \n");
    }
    return 0;
}
