#include<stdio.h>
struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};
int maxDepth(struct TreeNode *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int leftHeight= maxDepth(root->left);
	int rightHeight= maxDepth(root->right);
	if(leftHeight>rightHeight)
	{
		return leftHeight+1;
	}
	else
	{
		return rightHeight+1;	
	}
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
	int depth=maxDepth(root);
	printf("Maximum Depth= %d",depth);
	return 0;
}
