#include <stdio.h>
#define node 7
int queue[200];
int front, rear,n = 0;


void deQueue()
{
    queue[front] = 0;
    front++;
}
void enQueue(int num)
{
    queue[rear] = num;
    rear++;
}

int visitedArray[node] = {0};

int main()
{
    //we take adjacency matrix for the graph instead of the graph itself
    int graph[node][node] = {{0,1,1,0,0,0,0},
                        {1,0,0,1,0,0,0},
                        {1,0,0,1,0,0,0},
                        {0,1,0,0,1,0,0},
                        {0,0,0,1,0,1,0},
                        {0,0,0,0,1,0,1},
                        {0,0,0,0,0,1,0}};

    enQueue(1);
    visitedArray[0] = 1; //marking 1 for visited node

    printf("Breath First Search Traversal for 7 node graph \n");
    while(front != rear)
    {
        int currentNode = queue[front];
        printf("%d  ", currentNode);

        deQueue();

        for(int i = 0; i < 7; i++)
        {
            if((graph[currentNode - 1][i] == 1) && (visitedArray[i] == 0)) 
            {
                visitedArray[i] = 1;
                enQueue(i+1);

            }
        }
    }
    return(0);
                        
}