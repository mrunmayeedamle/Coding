#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define size 50

int queue[size], f = -1, r = -1;
void enQueue();
void deQueue();
void display();

int main()
{
    int n;
    while(1)
    {
        printf("Circular Queue Operations: \n \n");
        printf("Select the operation to be performed: \n");
        printf("1) Enter an element, 2) Remove an element, 3) Display the queue, 4) Exit -> ");
        scanf("%d", &n);

        switch(n)
        {
            case 1: enQueue();
            break;
            case 2: deQueue();
            break;
            case 3: display();
            break;
            case 4: exit(1);
            break;
            default: printf("Invalid Input!! \n"); 
        }
        sleep(1);
    }
    return 0;    
}

void enQueue()
{
    int num;
    if(f == r + 1 || f == 0 && r == size-1)
    {
        printf("Invalid!! Queue is full! \n\n");
    }
    else
    {
        if(f == -1)
        {
            f = 0;
        }
        r = ((r + 1) % size);
        printf("Enter the number you want to insert in the queue: \n");
        scanf("%d", &num);
        queue[r] = num;
    }
}

void deQueue()
{
    if (f == -1)
    {
        printf("Invalid!! Queue is empty! \n\n");
    }
    else
    {
        printf("Removed element: %d \n\n", queue[f]);
        if(f == r)
        {
            f = r = -1;
        }
        else
        {
            f = ((f + 1) % size);
        }
    }
}

void display()
{
    if(r == -1)
    {
        printf("Empty queue \n\n");
    }
    else
    {
        printf("Queue is : \n |");
        int i;
        for(i = f; i<=r; i++)
        {
            printf("%d  ", queue[i]);
        }
        printf("|\n\n");
    }
}