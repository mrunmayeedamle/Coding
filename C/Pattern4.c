/*Upside-down triangle pattern CSBS-07*/
#include <stdio.h>
int main()
{
    int n, i, j;
    char ch = '*';
    printf("Enter the value of n. \n");
    scanf("%d", &n);
    for(i = n; i>= 1; i--) {
        for(j = 1; j<=i; j++){
            printf("%c", ch);
        }
        printf(" \n");
    }
    return 0;
}
