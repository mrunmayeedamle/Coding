/*Calculating electricity bill for units consumed CSBS-07*/
#include <stdio.h>
int main()
{
    int unit, Bill, sur_ch, Total_bill;
    printf("Enter the amount of units of electricity consumed: \n");
    scanf("%d", &unit);
    if(unit <= 50) {
        Bill = (unit * 0.5);
    }
    else if (unit <=150) {
        Bill = ((unit - 50) * 0.75) + 25;
    }
    else if (100 < unit <= 200) {
        Bill = ((unit - 150) * 1.2) + 100;
    }
    else if (unit >= 250) {
        Bill = ((unit - 250) * 1.5) + 220;
    }
    sur_ch = Bill * 0.2;
    Total_bill = Bill + sur_ch;
    printf("Total bill is %d rs.", Total_bill);
    return 0;
}
