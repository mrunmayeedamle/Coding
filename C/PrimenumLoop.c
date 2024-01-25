/*Checking if the number is prime or not CSBS-07*/
#include <stdio.h>
int main()
{
    int i, n, count;
    count = 0;
    printf("Enter the number: \n");
    scanf("%d",&n);

    for(i = 1; i<=n; i++){
        if(n % i ==0)
        {
            count++;
        }
    }
    if(n == 1) {
        printf("%d is neither prime nor composite.", n);
    }
    else if(count == 2) {
        printf("%d is a prime number", n);
    }
    else {
        printf("%d is not a prime number", n);
    }
    return 0;
}
