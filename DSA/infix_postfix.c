#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 50

int precedence(char);
int isOpt(char);
char* in_to_post(char*);

int main()
{

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
            
        }
    }
}