/*Program to store information student using structure(arg. to func.) CSBS-07*/
#include <stdio.h>
#include <string.h>

struct student
{
    char name[10];
    int roll_no;
    float marks;
}s;

void display(struct student);

int main()
{
    printf("STUDENT RECORD \n\n");
    printf("Entering the information of students. \n");

    printf("Enter the student's name: \n");
    gets(s.name);

    printf("Enter the student's roll no.: \n");
    scanf("%d", &s.roll_no);

    printf("Enter the student's marks: \n\n");
    scanf("%f", &s.marks);

    printf("DISPLAYING ENTERED INFORMATION : \n\n");
    display(s);
    return 0;
}

void display(struct student s)
{
    printf("Name: %s \n", s.name);
    printf("Roll No.: %d \n", s.roll_no);
    printf("Marks : %.2f", s.marks);
}
