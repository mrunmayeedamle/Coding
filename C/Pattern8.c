/*Increasing number triangle pattern CSBS-07*/
#include <stdio.h>
int main()
{
    int n, num, i, j;
    num = 1;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf(" \n");
    }
    return 0;
}
