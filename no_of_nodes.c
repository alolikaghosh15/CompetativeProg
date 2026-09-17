#include<stdio.h>
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
int countNodes(struct TreeNode *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+countNodes(root->left) + countNodes(root->right);
}
int main()
{
    struct TreeNode node1, node2, node3, node4, node5;
    node1.val=1;
    node2.val=2;
    node3.val=3;
    node4.val=4;
    node5.val=5;
    node1.left=&node2;
    node1.right=&node3;
    node2.left=&node4;
    node2.right=&node5;
    node3.left=NULL;
    node3.right=NULL;
    node4.left=NULL;
    node4.right=NULL;
    node5.left=NULL;
    node5.right=NULL;
    struct TreeNode *root=&node1;
    int nodes=countNodes(root);
    printf("Number of Nodes=%d",nodes);
    return 0;
}