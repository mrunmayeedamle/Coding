/*Calculator Program CSBS-07*/
#include <stdio.h>
int main()
{
    char opt;
    float a, b;
    printf("Please enter the desired operator: \n");
    scanf("%c", &opt);

    printf("Enter the Values of 2 numbers: \n");
  	scanf("%f%f", &a, &b);

    if (opt == '+') {
        printf("\n %.2f + %.2f  = %.2f", a, b, a + b);
    }
    else if (opt == '-') {
        printf("\n %.2f - %.2f  = %.2f", a, b, a - b);
    }
    else if (opt == '*') {
        printf("\n %.2f * %.2f  = %.2f", a, b, a * b);
    }
    else if (opt == '/') {
        printf("\n %.2f / %.2f  = %.2f", a, b, a / b);
    }
    else
        printf("Enter a valid operator\n");
    return 0;
}
