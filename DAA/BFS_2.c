#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100

int queue[size], node, num;
int front, rear = -1;
int adjacencyMatrix[size][size] = {0};
int visitedArray[size] = {0};

void enQueue(int node)
{
    if(front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = node;
}

void deQueue()
{
    if (front == -1)
    {
        printf("Queue is empty! \n");
    }
    else
    {
        front++;
    }
}

void display()
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (adjacencyMatrix[i][j] == 1)
            {
                printf("Node %d: %d", i + 1, i+1);
                printf("-> %d \n", j + 1);
            }
        }
        printf("\n");
    }
}

int main()
{
    char edge[10];
    printf("Enter the number of nodes in your graph: ");
    scanf("%d", &num);


    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            if(i == j)
            {
                adjacencyMatrix[i][j] = 0;
                continue;
            }
            if(i > j)
            {
                continue;
            }

            printf("Is there an edge between node %d and %d?  : ", i+1, j+1);
            scanf("%s", edge);
            if(strcmp(edge, "yes") == 0 || strcmp(edge, "YES") == 0 || strcmp(edge, "y") == 0)
            {
                adjacencyMatrix[i][j] = 1;
                adjacencyMatrix[j][i] = 1;
            }
            else
            {
                adjacencyMatrix[i][j] = 0;
            }
        }
    }
    display();
    printf("\n\n");
    enQueue(1);
    visitedArray[0] = 1;
    printf("BFS Traversal : ");

    while(front <= rear)
    {
        
        int currentNode = queue[front];
        printf("%d -> ", currentNode);
        deQueue();

        for(int i = 0; i < num; i++)
        {
            if((adjacencyMatrix[currentNode - 1][i] == 1) && (visitedArray[i] == 0))
            {
                visitedArray[i] = 1;
                enQueue(i + 1);
            }
        }   
    }
    return 0;
}