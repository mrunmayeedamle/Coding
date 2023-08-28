/*Program for file opening, reading and closing*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10];
    FILE *fptr;

    fptr = fopen("FileOperations.txt", "r"); //file is created or opened in read mode.

    if(fptr == NULL)
    {
        printf("ERROR!");
        exit(1);
    }

    fscanf(fptr,"%s", &a); //The values are read from the file

    printf("Word is : %s", a);

    fclose(fptr); //File is closed

    return 0;
}
