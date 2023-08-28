/*Checking Prime numbers using function CSBS-07*/
#include <stdio.h>
int Prime_num(int);

int main()
{
    int n, m;
    printf("Enter the value of number: \n");
    scanf("%d", &n);
    m = Prime_num(n);
    if (m == 1){
        printf("It is a prime number");
    }
    else
        printf("It is not a prime number");
        return 0;
}

int Prime_num(int n)
{
    int i, count;
    count = 0;
    for (i = 1; i<=n; i++){
            if (n% i == 0){
                count++;
            }
    }
    if (count == 2){
        return 1;
    }
}
