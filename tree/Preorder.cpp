#include"Prototype.h"
#include"structure.h"

void Preorder(struct node *tree)
{
	if(tree!=NULL)
	{
		printf("%d\n",tree->data);
		Preorder(tree->lchild);
		Preorder(tree->rchild);
	}
}