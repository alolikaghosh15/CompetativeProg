#include <stdio.h>
#define INF 9999
#define MAX 20

void dijkstra(int graph[MAX][MAX],int n,int src){
    int dist[MAX],visited[MAX],i,j,u,min;
    for(i=0;i<n;i++){
        dist[i]=INF;
        visited[i]=0;
    }
    dist[src]=0;
    for(i=0;i<n-1;i++){
        min=INF;
        u=-1;
        for(j=0;j<n;j++){
            if(!visited[j]&&dist[j]<min){
                min=dist[j];
                u=j;
            }
        }
        if(u==-1) break;
        visited[u]=1;
        for(j=0;j<n;j++){
            if(!visited[j]&&graph[u][j]!=0&&dist[u]+graph[u][j]<dist[j])
                dist[j]=dist[u]+graph[u][j];
        }
    }
    printf("\nShortest distances from vertex %d:\n",src);
    for(i=0;i<n;i++)
        printf("To %d = %d\n",i,dist[i]);
}

int main(){
    int graph[MAX][MAX],n,src,i,j;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
    printf("Enter source vertex: ");
    scanf("%d",&src);
    dijkstra(graph,n,src);
    return 0;
}
