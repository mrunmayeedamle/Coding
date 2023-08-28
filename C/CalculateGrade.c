/*Calculating Grade of students CSBS-07*/
#include <stdio.h>
int main()
{
    float M1, M2, M3, M4, M5, G;
    printf("Please enter your student's marks out of 100: \n");
    scanf("%f %f %f %f %f",&M1,&M2,&M3,&M4, &M5);
    G = (M1 + M2 + M3 + M4+ M5) / 5;
    if(G < 50) {
        printf("Your student has failed. Their grade is : %f", G);
    }
    else {
        printf("Your student has passed. Their grade is : %f", G);
    }
    return 0;
}
