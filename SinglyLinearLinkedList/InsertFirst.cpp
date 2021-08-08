#include"prototype.h"
#include"structure.h"

BOOL InsertFirst(struct node** first,int value)
{
	struct node* newnode=NULL;
	newnode=(struct node *)malloc(sizeof(struct node));
	//initialising  member of structure
	newnode->data=value;
	newnode->next=NULL;
	if(*first==NULL)//if the node is empty
	{
		*first=newnode;
	}
	else
	{
		newnode->next=(*first);
		*first=newnode;
	}
	return TRUE;
}//function close
