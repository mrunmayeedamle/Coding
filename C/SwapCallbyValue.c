/* Swapping two number by call by value CSBS-07*/
#include <stdio.h>

void swap(int, int);

int main()
{
   int a, b;

   printf("Enter the value of a and b: \n");
   scanf("%d%d",&a,&b);

   printf("Before Swapping a = %d  b = %d\n", a, b);

   swap(a, b);

   printf("After Swapping in function a = %d  b = %d\n", a, b);

   return 0;
}

void swap(int x, int y)
{
   int temp;

   temp = x;
   x = y;
   y = temp;
    printf("Values of a and b swapped in function is a = %d  b = %d\n",x,y);
}
