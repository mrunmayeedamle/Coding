#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define size 50

int precedence(char);
int isOpt(char);
char* in_to_post(char*);

int main()
{
    char expr[size];
    printf("Enter the expression: ");
    scanf("%s", expr);

    char* postfix = in_to_post(expr);
    printf("Infix to Postfix: ");
    printf("%s \n", postfix);
    free(postfix);
    return 0;
}

int precedence(char opt)
{
    switch(opt)
    {
        case '+': return 1;
        break;
        case '-': return 1;
        break;
        case '*': return 2;
        break;
        case '/': return 2;
        break;
        case '^': return 3;
        break;
        default: return -1;
    }
}

int isOpt(char ch)
{
    return(ch == '+' ||ch == '-' ||ch == '*' ||ch == '/' ||ch == '^');
}

char* in_to_post(char* infix)
{
    int i, j;
    int l = strlen(infix);
    char* postfix = (char*)malloc(sizeof(char) * (l + 2));
    char stack[size];
    int top = -1;

    for(i = 0, j = 0; i < l; i++)
    {
        if(infix[i] == ' ' || infix[i] == '\t')
        {
            continue;
        }
        if(isalnum(infix[i]))
        {
            postfix[j++] = infix[i];
        }
        else if(infix[i] == '(')
        {
            stack[++top] = infix[i];
        }
        else if(infix[i] == ')')
        {
            while(top > -1 && stack[top] != '(')
            {
                postfix[j++] = stack[top--];
            }
            top--;
        }
        else if(isOpt(infix[i]))
        {
            while(top > -1 && precedence(stack[top]) >= precedence(infix[i]))
            {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }
    while(top > -1)
    {
        if(stack[top] == '(')
        {
            return "Invalid Expression";
        }
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
    return postfix;
}