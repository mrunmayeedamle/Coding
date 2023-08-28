/*Reversing a string CSBS-07*/

#include <stdio.h>
#include <string.h>

int main()
{
    char Original[20];
    char Reverse[20];

    printf("Enter the string: \n");
    scanf("%s",Original);

    strcpy(Reverse,Original);
    strrev(Reverse);

    printf("The string after reversed is: %s", Reverse);
    return 0;
}
