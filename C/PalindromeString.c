/*Palindrome String CSBS-07*/

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

    if (strcmp(Original,Reverse) == 0) /* !strcmp means statement is executed if its value is 0*/
    {
        printf("It's a palindrome string.");
    }
    else
    {
        printf("It's not a palindrome string.");
    }

    return 0;
}
