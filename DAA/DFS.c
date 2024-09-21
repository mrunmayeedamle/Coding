#include <stdio.h>
#define node 7

//we take adjacency matrix for the graph instead of the graph itself
    int graph[node][node] = {{0,1,1,0,0,0,0},
                        {1,0,0,1,0,0,0},
                        {1,0,0,1,0,0,0},
                        {0,1,0,0,1,0,0},
                        {0,0,0,1,0,1,0},
                        {0,0,0,0,1,0,1},
                        {0,0,0,0,0,1,0}};

    int visitedArray[node] = {0};


void DFS(int i)
{
    int j;
    
    printf("%d  ", i+1);
    visitedArray[i] = 1; //marking 1 for visited node

    for(j = 0; j < node; j++)
    {
        if (graph[i][j] == 1 && !visitedArray[j])
        {
            DFS(j);
        }
    }
}

int main()
{
    printf("Depth First Search Traversal for 7 node graph \n");
    DFS(0);
    return(0);
}