/*Calculator with switch break CSBS-07*/
#include <stdio.h>
int main()
{
    float a, b, Ans;
    char opt;
    printf("Enter the desired operator: \n");
    scanf("%c", &opt);
    printf("Enter two numbers: \n");
    scanf("%f%f", &a, &b);

    switch(opt)
    {
    case '+' :
        printf("%.2f + %.2f = %.2f", a, b, a + b);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", a, b, a - b);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", a, b, a * b);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f", a, b, a / b);
        break;
    default:
        printf("You've entered an invalid operator");
    }
    return 0;
}
