/*Reversing String w/o string fun. CSBS-07*/

#include <stdio.h>

int main()
{
    char S[20];
    char copy[20];
    int i, m;
    int n = 0;

    printf("Enter the string: \n");
    scanf("%s", S);

    for(i = 0; S[i] != '\0'; i++)
    {
        n++;
    }
    m = n-1;

    for(i = 0; i < n; i++)
    {
        copy[m] = S[i];
        m--;
    }

    printf("The string after reversing is: ");
    for(i = 0; i< n; i++)
    {
        printf("%c", copy[i]);
    }

    return 0;
}
