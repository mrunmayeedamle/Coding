//Performing matrix operations 
#include <stdio.h>
#include <stdlib.h>
void matrix_add();
void matrix_sub();
void matrix_mul();
void input(int matrix[10][10]);
int m, n;

int main()
{
    int x;

    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &m, &n);

    printf("Enter the operation you want: 1. Addition, 2. Subtraction, 3.Multiplication, 4.Exit: \n");
    scanf("%d", &x);

    switch(x)
    {
        case 1: matrix_add();
        break;
        case 2: matrix_sub();
        break;
        case 3: matrix_mul();
        break;
        case 4: exit(1);
        break;
        default: exit(0);
    }
    return 0;
}

void input(int matrix[10][10])
{
    int i, j;
    printf("Enter the elements of matrix: \n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    } 
}

void matrix_add()
{
    int f_matrix[10][10], s_matrix[10][10], sol[10][10];
    int i, j;
    input(f_matrix);
    input(s_matrix);
    printf("Matrix addition: \n\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            sol[i][j] = f_matrix[i][j] + s_matrix[i][j];
        }
    }

    printf("Matrix after addition: \n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", sol[i][j]);
        }
        printf("\n");
    }
}

void matrix_sub()
{
    int f_matrix[10][10], s_matrix[10][10], sol[10][10];
    int i, j;
    input(f_matrix);
    input(s_matrix);

    printf("Matrix subtration: \n\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            sol[i][j] = f_matrix[i][j] - s_matrix[i][j];
        }
    }

    printf("Matrix after subtraction: \n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", sol[i][j]);
        }
        printf("\n");
    }
}

void matrix_mul()
{
    int f_matrix[10][10], s_matrix[10][10], sol[10][10];
    int i, j, k;
    input(f_matrix);
    input(s_matrix);
    
    printf("Matrix multipliation: \n\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            sol[i][j] = 0;
            for(k = 0; k < m; k++)
            {
                sol[i][j] += f_matrix[i][k] * s_matrix[k][j];
            }
        }
    }

    printf("Matrix after multiplication: \n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", sol[i][j]);
        }
        printf("\n");
    }
}