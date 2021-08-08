#include"Prototype.h"
#include"structure.h"

void Insert(struct node **tree,int value)
{
	struct node* newnode=NULL;
	if(*tree==NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->lchild=NULL;
		newnode->data=value;
		newnode->rchild=NULL;
		(*tree)=newnode;
	}
	else if(value<(*tree)->data)
	{
		Insert(&(*tree)->lchild,value);
	}
	else if(value>(*tree)->data)
	{
		Insert(&(*tree)->rchild,value);//local variable,ni,old ebp,parameter
	}

}