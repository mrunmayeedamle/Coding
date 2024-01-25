/*Hollow Rectangle pattern CSBS-07*/
#include <stdio.h>
int main()
{
    int n, m, i, j;
    char ch = '*';
    printf("Enter the values for n and m. \n");
    scanf("%d%d", &n, &m);
    for(i= 0; i< n; i++) {
        for(j= 0; j< m; j++) {
            if(i==0 || i == n-1 || j== 0 || j == m-1) {
                printf("%c", ch);
            }
            else {
                printf(" ");
            }
        }
        printf(" \n");
    }
    return 0;
}
