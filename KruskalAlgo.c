#include <stdio.h>
#define MAX 50

struct Edge{
    int src,dest,weight;
};

int parent[MAX];

int find(int i){
    while(parent[i]!=i)
        i=parent[i];
    return i;
}

void unionSet(int u,int v){
    int rootU=find(u);
    int rootV=find(v);
    parent[rootU]=rootV;
}

void sortEdges(struct Edge edges[],int E){
    int i,j;
    struct Edge temp;
    for(i=0;i<E-1;i++){
        for(j=0;j<E-i-1;j++){
            if(edges[j].weight>edges[j+1].weight){
                temp=edges[j];
                edges[j]=edges[j+1];
                edges[j+1]=temp;
            }
        }
    }
}

void kruskal(struct Edge edges[],int V,int E){
    int i,count=0,totalCost=0;
    sortEdges(edges,E);
    for(i=0;i<V;i++)
        parent[i]=i;
    printf("\nEdges in Minimum Spanning Tree:\n");
    for(i=0;i<E&&count<V-1;i++){
        int u=edges[i].src;
        int v=edges[i].dest;
        if(find(u)!=find(v)){
            printf("%d -- %d : %d\n",u,v,edges[i].weight);
            totalCost+=edges[i].weight;
            unionSet(u,v);
            count++;
        }
    }
    if(count!=V-1)
        printf("Graph is not connected.\n");
    else
        printf("Total MST cost = %d\n",totalCost);
}

int main(){
    struct Edge edges[MAX];
    int V,E,i;
    printf("Enter number of vertices: ");
    scanf("%d",&V);
    printf("Enter number of edges: ");
    scanf("%d",&E);
    printf("Enter source, destination and weight:\n");
    for(i=0;i<E;i++)
        scanf("%d%d%d",&edges[i].src,&edges[i].dest,&edges[i].weight);
    kruskal(edges,V,E);
    return 0;
}
