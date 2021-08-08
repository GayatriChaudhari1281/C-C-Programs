#include"prototype.h"
#include"structure.h"

BOOL InsertLast(
					struct node **first,
					struct node** last ,
					int value
				)
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
		(*first)->prev=(*last);
	}
	else
	{
		(*last)->next=newnode;
		newnode->prev=(*last);
		*last=newnode;
		(*last)->next=(*first);
		(*first)->prev=(*last);
	}
	return TRUE;
}