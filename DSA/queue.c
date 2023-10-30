//Performing operations in Queue such as en-queue, de-queue and display.
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
    char c;
    do
    {
        printf("Queue Operations: \n \n");
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
        printf("Do you want to continue? -> (Y)es or (N)o? \n");
        scanf(" %c", &c);
        sleep(1);
    } while (c == 'Y' || c == 'y');
    return 0;    
}

void enQueue()
{
    int num;
    if(r == size - 1)
    {
        printf("Invalid!! Queue is full! \n\n");
    }
    else
    {
        if(f == -1)
        {
            f = 0;
        }
        r++;
        printf("Enter the number you want to insert in the queue: \n");
        scanf("%d", &num);
        queue[r] = num;
    }
}

void deQueue()
{
    if(f == -1)
    {
        printf("Invalid!! Queue is empty! \n\n");
    }
    else
    {
        printf("Removed element: %d \n\n", queue[f]);
        f++;
        if(f>r)
        {
            f = r = -1;
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
        printf("|");
    }
}