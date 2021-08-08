#include"Prototype.h"
#include"structure.h"

void Mirror(struct node *tree)
{
	if(tree==NULL)
	{
		return;
	}
	else
	{
		struct node *temp;
		Mirror(tree->lchild);//recursion
		Mirror(tree->rchild);
		temp=tree->lchild;
		tree->rchild;
	}
}