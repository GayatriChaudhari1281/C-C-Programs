#include"prototype.h"
#include"structure.h"

BOOL InsertFirst(struct node** first,int value)
{
	struct node* newnode=NULL;
	newnode=(struct node *)malloc(sizeof(struct node));
	//initialising  member of structure
	if(newnode==NULL)
	{
		printf("Memory Not Available");
		return FALSE;
	}
	newnode->prev=NULL;
	newnode->data=value;
	newnode->next=NULL;
	if(*first==NULL)//if the LL is empty
	{
		*first=newnode;
	}
	else
	{

		newnode->next=(*first);
		(*first)->prev=newnode;
		(*first)=newnode;
	}
	return TRUE;
}//function close
