#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

int graph[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];
int total;

void DFS(int vertex);

int main()
{
    int i, j;

    printf("Enter the total number of vertices in the graph: ");
    scanf("%d", &total);

    // Adjacency matrix input
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < total; i++) {
        for (j = 0; j < total; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    for (i = 0; i < total; i++) {
        visited[i] = 0;
    }

    printf("\nDFS traversal:\n");
    DFS(0);

    return 0;
}

void DFS(int vertex)
{
    int j;
    printf("%d\t", vertex);
    visited[vertex] = 1;

    for (j = 0; j < total; j++) {
        if (!visited[j] && graph[vertex][j] == 1) {
            DFS(j);
        }
    }
}
