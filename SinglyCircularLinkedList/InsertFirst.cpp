#include"prototype.h"
#include"structure.h"

BOOL InsertFirst(
					struct node** first,
					struct node** last,
					int value)
{
	struct node* newnode=NULL;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memory is not available");
		return FALSE;
	}
	//initialising  member of structure
	newnode->data=value;
	newnode->next=NULL;
	if((*first==NULL) && (*last==NULL))
	{
		(*first)=(*last)=newnode;
		(*last)->next=(*first);
	}
	else
	{
		newnode->next=(*first);
		(*first)=newnode;
		(*last)->next=(*first);
	}
	return TRUE;
}