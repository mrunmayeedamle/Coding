/*Program for file opening, writing and closing*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[10];
    FILE *fptr;

    fptr = fopen("FileOperations.txt", "w"); //file is created or opened in write mode.

    if(fptr == NULL)
    {
        printf("ERROR!");
        exit(1);
    }

    printf("The file is created or opened. \n");

    printf("Enter a word: \n");
    gets(a);

    fprintf(fptr, "%s \n", a); //Information is written in the file.

    printf("The file is being closed. \n");

    fclose(fptr); //The file is closed.

    return 0;
}
