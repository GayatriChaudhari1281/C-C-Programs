#include"Prototype.h"
#include"structure.h"

BOOL Search(struct node *tree,int value)
{
	if(tree==NULL)
	{
		return FALSE;
	}
	else if(value<tree->data)
	{
		Search(tree->lchild,value);
	}
	else if(value>tree->data)
	{
		Search(tree->rchild,value);
	}
	else if(value==tree->data)
	{
		return TRUE;
	}
}