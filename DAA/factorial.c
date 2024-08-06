# include <stdio.h>
# include <time.h>

int factorial(int);

int main()
{
    clock_t begin = clock();

    int num, fac;
    printf("Enter the number you need factorial of: ");
    scanf("%d", &num);

    fac = factorial(num);
    printf("Factorial of %d = %d\n\n", num, fac);

    clock_t end = clock();

    double time = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time taken to execute: %f", time);
    return 0;
}

int factorial (int n)
{
    int i, sum = 1;
    for (i = n; i > 0; i--)
    {
        sum = sum * i;
    }
    return sum;
}
