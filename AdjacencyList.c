#include <stdio.h>
#include <stdlib.h>

struct Node{
    int vertex;
    struct Node *next;
};

struct Node *adj[20];

void addEdge(int u,int v){
    struct Node *newNode=malloc(sizeof(struct Node));
    newNode->vertex=v;
    newNode->next=adj[u];
    adj[u]=newNode;
}

int main(){
    int n,e,u,v,i;

    printf("Enter number of vertices: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        adj[i]=NULL;

    printf("Enter number of edges: ");
    scanf("%d",&e);

    for(i=0;i<e;i++){
        scanf("%d%d",&u,&v);
        addEdge(u,v);
        addEdge(v,u);
    }

    printf("\nAdjacency List:\n");

    for(i=0;i<n;i++){
        struct Node *temp=adj[i];
        printf("%d -> ",i);

        while(temp!=NULL){
            printf("%d -> ",temp->vertex);
            temp=temp->next;
        }

        printf("NULL\n");
    }

    return 0;
}
