/* Calculating Grade with loop CSBS-07*/
#include <stdio.h>
int main()
{
    int n, Marks;

        do {
        printf("Please enter the students marks: \n");
        scanf("%d", &Marks);
            if (Marks <= 100 && Marks >= 90) {
                printf("This is great! \n");
            }
            else if (Marks <= 89 && Marks>= 60) {
                printf("This is good. \n");
            }
            else if (Marks<= 59 && Marks >= 0) {
                printf("You did well \n");
            }
            else {
                printf("!!INVALID!!");
            }
            printf("Do you want to continue? yes(1), no(0) \n");
            scanf("%d", &n);
        }
        while(n == 1);
    }
