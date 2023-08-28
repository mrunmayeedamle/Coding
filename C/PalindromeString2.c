/*Palindrome string w/o string fun. CSBS-07 */

#include <stdio.h>

int main()
{
    char S[20];
    char copy[20];
    int i, n, m, count = 0, z = 0;

    printf("Enter the string: \n");
    scanf("%s", S);

    for(i = 0; S[i] != '\0'; i++)
    {
        count++;
    }
    m = count-1;

    for(i = 0; i < count; i++)
    {
        copy[m] = S[i];
        m--;
    }

    for(i = 0; i < count; i++)
    {
        if (copy[i] == S[i]){
                z++;
        }
    }
    if (z == count)
        printf("It is a palindrome string.");
        else
        printf("It is not a palindrome string.");
    return 0;
}

