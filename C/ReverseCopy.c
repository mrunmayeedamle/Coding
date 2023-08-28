/*To copy an array to other in reverse CSBS-07*/
#include <stdio.h>
int main()
{
    int OrigArr[100], copyArr[100], lim, i, j,count;
    printf("Enter the size of array: \n");
    scanf("%d", &lim);

    printf("Enter the elements: \n");
    for(i = 0; i< lim; i++)
    {
        scanf("%d", &OrigArr[i]);
    }
    count = lim - 1;
    for(j = 0; j < lim; j++)
    {
        copyArr[count] = OrigArr[j];
        count--;
    }
    printf("Original -> Copied \n");

    for(j = 0; j < lim; j++) {
        printf("%d  ->  %d \n", OrigArr[j], copyArr[j]);
    }
    return 0;
}
