/*Calculating Grade of students CSBS-07*/
#include <stdio.h>
int main()
{
    float M1, M2, M3, M4, M5, G;
    printf("Please enter your student's marks out of 100: \n");
    scanf("%f %f %f %f %f",&M1,&M2,&M3,&M4, &M5);
    G = (M1 + M2 + M3 + M4+ M5) / 5;
    printf("The grade of your student is: %f", G);
    return 0;
}
