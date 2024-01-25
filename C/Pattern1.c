/*Rectangle pattern CSBS-07*/
#include<stdio.h>
int main()
{
    int n, m, i, j;
    char ch = '*';
    printf("Enter the values of n and m: \n");
    scanf("%d%d", &n, &m);
    for(i = 0; i< n; i++) {
        for(j= 0; j < m; j++){
            printf("%c", ch);
        }
        printf(" \n");
    }
    return 0;
}
