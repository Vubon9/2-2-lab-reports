#include <iostream>
using namespace std;
void DFS(int i);
int G[10][10],visited[10] = {0},n;
int main()
{
    cout<< "Enter the number of Vertices: ";
    cin>>n;
    cout << "Enter the adjacency matrix of the graph:";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>G[i][j];
        }
    }
    cout<< "DFS Traversal:";
    DFS(0);
    cout<<"Vertex Status:"<<endl;
    for(int i=0;i<n;i++){
        if(visited[i]==1){
            cout<<"Vertex visited"<<i<<endl;
        }
        else{
            cout<<"Vertex not visited"<<i<<endl;
        }
    }
    return 0;
}
void DFS(int i)
{
    cout<<" "<<i;
    visited[i]=1;
    for(int j=0;j<n;j++)
    {
        if(visited[j]==0 && G[i][j]==1)
        {
            DFS(j);
        }
    }
}