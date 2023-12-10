#include <stdio.h>
#define size 50

int stack[size];
int top = -1;

void push(int);
int pop();
int areBalanced(char[]);

int main()
{
    char exp[size];
    printf("Enter the expression: ");
    scanf("%s", exp);

    if(areBalanced(exp))
    {
        printf("Parantheses are balanced.");
    }
    else
    {
        printf("Parantheses are not balanced.");
    }
    return 0;
}

void push(int item)
{
    if(top >= size)
    {
        printf("Stack Overflow!! \n");
        return;
    }
    stack[++top] = item;
}

int pop()
{
    if(top < 0)
    {
        return -1;
    }
    return(stack[top--]);
}

int areBalanced(char expr[])
{
    int i;
    for(i = 0; expr[i]; i++)
    {
        if(expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            push(expr[i]);
        }
        else if(expr[i] == ')' || expr[i] == ']' || expr[i] == '}')
        {
            if(top < 0)
            {
                return 0;
            }
            int p = pop();
            if((expr[i] == ')' && p != '(') || (expr[i] == ']' && p != '[') || (expr[i] == '}' && p != '{'))
            {
                return 0;
            }
        }
    }
    return (top == -1);
}