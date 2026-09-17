#include <stdio.h>
#define INF 9999
#define MAX 20

void prim(int graph[MAX][MAX],int n){
    int selected[MAX]={0},edges=0,i,j,x,y,min,totalCost=0;
    selected[0]=1;
    printf("\nEdges in Minimum Spanning Tree:\n");
    while(edges<n-1){
        min=INF;
        x=-1;
        y=-1;
        for(i=0;i<n;i++){
            if(selected[i]){
                for(j=0;j<n;j++){
                    if(!selected[j]&&graph[i][j]!=0&&graph[i][j]<min){
                        min=graph[i][j];
                        x=i;
                        y=j;
                    }
                }
            }
        }
        if(x==-1){
            printf("Graph is not connected.\n");
            return;
        }
        printf("%d -- %d : %d\n",x,y,min);
        totalCost+=min;
        selected[y]=1;
        edges++;
    }
    printf("Total MST cost = %d\n",totalCost);
}

int main(){
    int graph[MAX][MAX],n,i,j;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
    prim(graph,n);
    return 0;
}
