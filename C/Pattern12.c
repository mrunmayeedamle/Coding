/*Flag pattern CSBS-07*/
#include <stdio.h>
int main()
{
    int n, i, j;
    n = 4;
    for(i = 1; i<= n; i++){
        for(j = 1; j<= i; j++){
            printf("*");
        }
        printf(" \n");
    }
    for(i = 3; i>=1; i--){
        for(j = 1; j<=i; j++){
            printf("*");
        }
        printf(" \n");


}
     for(i = 1 ; i<=3; i++){
        for(j =1; j<=i; j++){
            printf("* \n");
        }
        }
    return 0;
}
