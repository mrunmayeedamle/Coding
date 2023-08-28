/*Displaying the weekday in a week CSBS-07*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number for respective weekday: \n");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
    printf("The weekday is Monday");
    break;
    case 2:
    printf("The weekday is Tuesday");
    break;
    case 3:
    printf("The weekday is Wednesday");
    break;
    case 4:
    printf("The weekday is Thursday");
    break;
    case 5:
    printf("The weekday is Friday");
    break;
    case 6:
    printf("The weekday is Saturday");
    break;
    case 7:
    printf("The weekday is Sunday");
    break;
    default:
    printf("Invalid entry");
    }
    return 0;
}
