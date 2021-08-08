#include"Prototype.h"
#include"structure.h"

void ParentNode(struct node *tree,int value)
{
	if(tree==NULL)
	{
		return;
	}
	while(tree!=NULL)
	{
		if(value<tree->data)
		{
			tree=tree->lchild;
		}
		else if(value>tree->data)
		{
			tree=tree->rchild;
		}
		else if(value==tree->data)
		{
			if(tree->lchild!=NULL || tree->rchild!=NULL)
			{
				printf("it is Parent Node");
				return;
			}
		
		}
	}
	printf("NOT parent tree");
}