#include<bits/stdc++.h>
using namespace std;
int a[20][20], q[20]={0}, visited[20]={0}, n, i, j, f=0, r=-1;
void bfs(int v)
{
    for (i=0; i<n; i++)
    {
        if (a[v][i] && visited[i]==0)
        q[++r]=i;
    }
    if(f<=r)
    {
        visited[q[f]]=1;
        bfs(q[f++]);
    }
}
int main()
{
    int v;
    printf("\n Enter the number of vertices:");
    scanf("%d", &n);
    printf("\n Enter graph data in matrix form: ");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the starting vertex: ");
    scanf("%d", &v);
    bfs(v);
    printf("\n The node which are reachable are:\n");
    
    for(i=0;i<n;i++)
    {
        if(visited[i])
        {
            printf("%d\t", i);
        }
        else
        {
            printf("BFS is not reachable. Not all nodes are reachable");
            break; 
        }
    }
}
