/*Program to store information student using structure & display it CSBS-07*/
#include <stdio.h>
#include <string.h>

struct student
{
    char Name[10];
    int roll_no;
    char Address[200];
    int age;
};

struct student info();

int main()
{
     struct student s;
     s = info();
     printf("DISPLAYING ENTERED INFORMATION : \n\n");
     printf("Name: %s \n", s.Name);
     printf("Address: %s \n", s.Address);
     printf("Roll No.: %d \n", s.roll_no);
     printf("Age : %d", s.age);

     return 0;
}
struct student info()
{
    struct student s1;
        printf("STUDENT RECORD \n\n");
    printf("Entering the information of students. \n");

    printf("Enter the student's name: \n");
    gets(s1.Name);

    printf("Enter the student's address: \n");
    gets(s1.Address);

    printf("Enter the student's roll no.: \n");
    scanf("%d", &s1.roll_no);

    printf("Enter the student's age: \n\n");
    scanf("%d", &s1.age);

    return s1;
}





