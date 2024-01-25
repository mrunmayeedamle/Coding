/*Calculating gross pay for employee CSBS-07*/
#include <stdio.h>
int main ()
{
    float base_hrs = 40;
    float ot_mul = 1.5;
    float hrs, pay_rate, ot_hrs, ot_pay, gross_pay;
    printf("Enter the hours worked: \n");
    scanf("%f", &hrs);

    printf("Enter the hourly pay: \n");
    scanf("%f", &pay_rate);

    if(hrs > base_hrs)
    {
        ot_hrs = (hrs - base_hrs);
        ot_pay = (ot_hrs * ot_mul) * pay_rate;
        gross_pay = (base_hrs * pay_rate) + ot_pay;
    }
    else
        gross_pay = (pay_rate * hrs);
        /*Printing final statement*/
    printf("Total pay is :%.2f", gross_pay);
    return 0;
}
