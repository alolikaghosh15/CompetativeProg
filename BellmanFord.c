#include <stdio.h>
#define INF 9999
#define MAX 50

struct Edge{
    int src,dest,weight;
};

void bellmanFord(struct Edge edges[],int V,int E,int src){
    int dist[MAX],i,j;
    for(i=0;i<V;i++)
        dist[i]=INF;
    dist[src]=0;
    for(i=1;i<=V-1;i++){
        for(j=0;j<E;j++){
            int u=edges[j].src;
            int v=edges[j].dest;
            int w=edges[j].weight;
            if(dist[u]!=INF&&dist[u]+w<dist[v])
                dist[v]=dist[u]+w;
        }
    }
    for(j=0;j<E;j++){
        int u=edges[j].src;
        int v=edges[j].dest;
        int w=edges[j].weight;
        if(dist[u]!=INF&&dist[u]+w<dist[v]){
            printf("Negative weight cycle detected!\n");
            return;
        }
    }
    printf("\nShortest distances from vertex %d:\n",src);
    for(i=0;i<V;i++)
        printf("To %d = %d\n",i,dist[i]);
}

int main(){
    struct Edge edges[MAX];
    int V,E,i,src;
    printf("Enter number of vertices: ");
    scanf("%d",&V);
    printf("Enter number of edges: ");
    scanf("%d",&E);
    printf("Enter source, destination and weight:\n");
    for(i=0;i<E;i++)
        scanf("%d%d%d",&edges[i].src,&edges[i].dest,&edges[i].weight);
    printf("Enter source vertex: ");
    scanf("%d",&src);
    bellmanFord(edges,V,E,src);
    return 0;
}
