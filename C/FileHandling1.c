/* Read names and marks of 'n' students and store in a file*/
# include <stdio.h>
#include <stdlib.h>

struct student
{
    char Name[10];
    float marks;
}s[10];

int main()
{
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    FILE *fp;
    fp = fopen("Record.txt", "w");

    if (fp == NULL)
    {
        printf("Error!");
        exit (1);
    }


    for(i = 0; i < n; i++)
    {
        printf("Enter the name of the student: \n");
        scanf("%s", s[i].Name);
    }


    for(i = 0; i < n; i++)
    {
        printf("Enter the marks of the student: \n");
        scanf("%f", &s[i].marks);
    }

    for(i = 0; i < n; i++)
    {
       fprintf(fp, "%d. Name: %s \t Marks: %f \n", i+1, s[i].Name, s[i].marks);
    }
    fclose(fp);

    return 0;
}

