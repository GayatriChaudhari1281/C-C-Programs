#include"Prototype.h"
#include"structure.h"

void Postorder(struct node *tree)
{
	if(tree!=NULL)
	{
		Postorder(tree->lchild);
		Postorder(tree->rchild);
		printf("%d\n",tree->data);
	}
}