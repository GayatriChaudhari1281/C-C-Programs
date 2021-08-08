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
	newnode->prev=NULL;
	if((*first==NULL) && (*last==NULL))
	{
		(*first)=(*last)=newnode;
		(*last)->next=(*first);
		(*first)->prev=(*last);//new
	}
	else
	{
		(newnode)->next=(*first);
		(*first)->prev=newnode;
		(*first)=newnode;
		(*last)->next=(*first);
		(*first)->prev=(*last);
	}
	return TRUE;
}