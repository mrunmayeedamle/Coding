# include <stdio.h>

int main()
{
    int a = 6;
    int b = 0;
    while(a < 10)
    {
        a = a/12 + 1;
        a += b;
    }
    printf("%d", a);
    return 0;
}