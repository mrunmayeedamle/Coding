/*Counting +ve, -ve and zeroes CSBS-07*/
#include <stdio.h>
int main()
{
int lim, num, pos_num, neg_num, zero;
pos_num = 0;
neg_num = 0;
zero = 0;
printf("Enter the amount of numbers to be input: \n");
scanf("%d", &lim);
printf("Enter %d numbers of your choice: \n", lim);

while(lim)
{
    scanf("%d",&num);
    if(num > 0) {
        pos_num++;
    }
    else if (num < 0) {
        neg_num++;
    }
    else {
        zero++;
    }
    lim--;
}
printf("\n Number of +ve numbers : %d", pos_num);
printf("\n Number of -ve numbers : %d", neg_num);
printf("Number of zeroes : %d", zero);
return 0;
}
