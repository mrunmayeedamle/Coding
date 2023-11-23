//Stack operations to push, pop and show elements using arrays
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define size 50

int top = -1, stack[size];
void push();
void pop();
void show();

int main()
{
    int n;
    char c;
    while(1)
    {
        printf("Stack Operations: \n \n");
        printf("Select the operation to be performed: \n");
        printf("1) Push an element, 2) Pop an element, 3) Display stack, 4) Exit -> ");
        scanf("%d", &n);

        switch(n)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: show();
            break;
            case 4: exit(1);
            break;
            default: printf("Invalid Input!! \n"); 
        }
        sleep(1);
    }
    return 0;    
}

void push()
{
    int x;
    if(top == size - 1)
    {
        printf("Stack Overflow!!Full stack \n\n");
    }
    else
    {
        printf("Enter the element to be added to the stack: \n");
        scanf("%d", &x);
        top += 1;
        stack[top] = x;
        printf("%d is pushed in stack. \n\n", x);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow!!Empty stack \n\n");
    }
    else
    {
        printf("Element popped from the top of stack: %d \n", stack[top]);
        top --;
    }
}

void show()
{
    if(top == -1)
    {
        printf("Stack Underflow!!Empty stack \n\n");
    }
    else
    {
        printf("Stack is : \n");
        int i;
        for(i = top; i>=0; i--)
        {
            printf("| %d | \n", stack[i]);
        }
    }

}