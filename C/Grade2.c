/*Calculating division CSBS-07*/
#include<stdio.h>
int main()
{
 float M1,M2,M3,M4,M5,percent;
 printf("Enter 5 subject marks:\n");
 scanf("%f %f %f %f %f",&M1,&M2,&M3,&M4,&M5);
 percent = (M1 + M2 + M3 + M4 + M5)/ 5;
 printf("Student gets %f percentage.\n",percent);
 if(percent>=80)
   printf("Division: A+");
 else if(percent<=79 && percent>=75)
   printf("Division: A");
 else if(percent<=74 && percent>=60)
   printf("Division: B");
 else if(percent<=59 && percent>=45)
   printf("Division: C");
 else if(percent<=44 && percent>=35)
   printf("Division: D");
 else
   printf("Fail");
 return 0;
}
