/*Searching a record in array of structure & display CSBS-07*/
#include <stdio.h>
#include <string.h>

struct student
{
    char name[10];
    int roll_no;
    float marks;
}s;

int main()
{
    int n, m, i, x;
    char name[10];
    int roll;

    struct student s[10];
    printf("Enter the no. of students :\n");
    scanf("%d",&x);

    printf("Entering the information of students. \n");

    for(i = 0; i < x; i++)
    {
    printf("Enter the student's name: \n");
    scanf("%s",s[i].name);

    printf("Enter the student's roll no.: \n");
    scanf("%d", &s[i].roll_no);

    printf("Enter the student's marks: \n\n");
    scanf("%f", &s[i].marks);
    }

    printf("SEARCHING FOR RECORD: \n\n");

    printf("Do you want to search by name(1) or roll no(2)? -> \n");
    scanf("%d", &n);

    if (n == 1){
        printf("Enter the name of the student: \n");
        scanf("%s", name);

        for(i = 0; i < x; i++)
        {
            m = strcmp(name, s[i].name);
        if(m == 0){
            printf("Name = %s \n Roll No.= %d \n Marks = %.2f", s[i].name, s[i].roll_no, s[i].marks);
    }
        }
    }

    else if (n == 2) {
            printf("Enter the roll no of the student: \n");
            scanf("%d", &roll);
            for(i = 0; i < x; i++)
            {
                if (roll == s[i].roll_no)
                {
                    printf("Name = %s \n Roll No.= %d \n Marks = %.2f", s[i].name, s[i].roll_no, s[i].marks);
                }
            }
        }
    else
        printf("Invalid Input!!");

    return 0;
}
