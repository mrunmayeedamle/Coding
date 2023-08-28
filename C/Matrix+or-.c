/* Matrix Addition & Subtraction CSBS-07*/
#include <stdio.h>
int main()
{
    int i, j, m, n;
    int first[20][20], second[20][20], sum[20][20], diff[20][20];
    char c;
    printf("Enter the operation to be performed(+/-): \n");
    scanf("%c", &c);

    printf("Enter the no. of rows and column: \n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of 1st matrix: \n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        scanf("%d", &first[i][j]);

    printf("Enter the elements of 2nd matrix: \n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        scanf("%d", &second[i][j]);

        if (c == '+')
        {
            printf("Sum : \n");
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
        }
        }
        else if (c == '-') {
                printf("Difference: \n");
            for(i = 0; i < m; i++) {
                for(j = 0; j < n; j++)
        {
            diff[i][j] = first[i][j] - second[i][j];
        printf("%d\t", diff[i][j]);
        }
        printf("\n");
        }
        }
        else
            printf("Wrong operation!!!");

        return 0;
}
