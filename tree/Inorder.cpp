#include"Prototype.h"
#include"structure.h"

void Inorder(struct node *tree)
{
	if(tree!=NULL)
	{
		Inorder(tree->lchild);
		printf("%d\n",tree->data);
		Inorder(tree->rchild);
	}
	
}