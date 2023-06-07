#include <stdio.h>
#include <stdlib.h>

int a[20][20], q[20] = {0}, visited[20] = {0}, n, i, j, f = 0, r = -1;

void bfs(int v)
{
    for (i = 0; i < n; i++)
    {
        if (a[v][i] == 1 && visited[i] == 0)
        {
            q[++r] = i;
            visited[i] = 1;
        }
    }

    if (f <= r)
    {
        bfs(q[f++]);
    }
}

int main()
{
    int v;

    printf("\n Enter The number of vertices: ");
    scanf("%d", &n);

    printf("\n ENTER GRAPH DATA IN MATRIX FORM:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Enter the starting vertex: ");
    scanf("%d", &v);

    bfs(v);

    int allReachable = 1;

    for (i = 0; i < n; i++)
    {
        if (visited[i])
        {
            printf("%d\t", i);
        }
        else
        {
            allReachable = 0;
            break;
        }
    }

    if (!allReachable)
    {
        printf("\n BFS is not possible. Not all nodes are reachable.\n");
    }

    return 0;
}
