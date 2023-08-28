/*Checking if the year is leap or not CSBS-07*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d", &year);
    if (year % 4 == 0)
        {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("Year %d is a leap year.", year);
            else
                printf("Year %d is not a leap year.", year);
        }
        else
            printf("Year %d is a leap year.", year);
        }

        else
            printf("Year %d is not a leap year.", year);


    return 0;
}
