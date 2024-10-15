//Program to find an element in given list using linear and binary search
#include <stdio.h>
#include <stdlib.h>
int i, j, n;
void linear_search(int array[100]);
void binary_search(int array[100]);

int main()
{
    int array[100], x;
    printf("Enter the number of elements to be added to list: \n");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the operation to be performed: \n");
    printf("1. Linear Search\n2. Binary Search\n3. Exit\n\n");
    scanf("%d", &x);

    switch(x)
    {
        case 1: linear_search(array);
        break;
        case 2: binary_search(array);
        break;
        case 3: exit(1);
        break;
        default: printf("Invalid Entry!!");
    }
    return 0;
}

void linear_search(int array[100])
{
    int a;
    printf("Enter the element to be searched: ");
    scanf("%d", &a);
    for(i = 0; i < n; i++)
    {
        if(array[i] == a)
        {
            printf("Element %d found in position %d in the list.\n", a, i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("Element not found in array!");
    }
}

void binary_search(int array[100])
{
    int b, c, m, mid, high, low;
    low = 0;
    high = n - 1;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                b = array[i];
                array[i] = array[j];
                array[j] = b;
            }
        }
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &c);
    while(low <= high)
    {
    mid = low + ((high - low)/2);
    if(array[mid] == c)
    {
        printf("Element %d found in position %d in the list.\n", c, mid + 1
        );
        m++;
    }
    if(array[mid] < c)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
    }
}