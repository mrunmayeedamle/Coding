# include <stdio.h>
# include <time.h>

int sum_arr(int[], int);

int main()
{
    clock_t begin = clock();

    int num, sum, i;
    int array[100];

    printf("Enter the number of elements in array: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
        printf("Enter element %d: ", (i+1));
        scanf("%d", &array[i]);
    }

    sum = sum_arr(array, num);
    printf("Sum of elements in array is %d\n\n", sum);

    clock_t end = clock();

    double time = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time taken to execute: %f", time);
    return 0;
}

int sum_arr(int arr[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return (sum_arr(arr, (n-1)) + arr[n-1]);
    }
}