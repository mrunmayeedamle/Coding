#include <stdio.h>

int B[100];
void Merge(int A[], int l, int m, int h)
{
    int i = l;
    int j = m + 1;
    int k = l;

    while(i <= m && j <= h)
    {
        if (A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    if(j > h)
    {
        while(i <= m)
        {
            B[k] = A[i];
            i++;
            k++;
        }
    }
    else if(i > m)
    {
        while(j <= h)
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }

    for(i = l; i <= h; i++)
    {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high)/2;
        MergeSort(A, low, mid);
        MergeSort(A, mid+1, high);
        Merge(A, low, mid, high);
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i< n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main()
{
    int A[100];
    int num;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        printf("Enter %d number: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("Unsorted array:[");
    printArray(A, num);

    MergeSort(A, 0, num-1);

    printf("Sorted array:[");
    printArray(A, num);

    return 0;


}
