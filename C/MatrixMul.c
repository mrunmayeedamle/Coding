/*Matrix Multiplication CSBS-07*/
#include <stdio.h>
int main()
{
    int i, j, k, m, n, a, b;
    int first[20][20], second[20][20], product[20][20];

    printf("Enter the no. of rows and column: \n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of 1st matrix: \n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        scanf("%d", &first[i][j]);
        a = m;

    printf("Enter the no. of rows and column: \n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of 2nd matrix: \n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        scanf("%d", &second[i][j]);
        b = n;

        printf("Product : \n");
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                product[i][j] = 0;
                for(k = 0; k < n; k++){
                product[i][j] += first[i][k] * second[k][j];
                }
            }
        }

        for(i = 0; i < a; i++){
            for(j = 0; j < b; j++){
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
        return 0;
}
