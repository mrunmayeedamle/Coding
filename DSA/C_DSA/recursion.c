#include <stdio.h>
#include <string.h>

void check_palindrome(char[], int);

int main()
{
    char string[50];
    printf("Checking whether given word is a palindrome: \n");
    printf("Enter the required word: ");
    gets(string);
    check_palindrome(string, 0);
    return 0;
}

void check_palindrome(char string[], int index)
{
    int length = strlen(string) - (index + 1);
    if(string[index] == string[length])
    {
        if(index + 1 == length || index == length)
        {
            printf("Given word is a palindrome. \n\n");
            return;
        }
        check_palindrome(string, index + 1);
    }
    else
    {
        printf("Given word is not a palindrome.");
    }
} 