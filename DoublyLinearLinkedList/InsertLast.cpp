#include"prototype.h"
#include"structure.h"

BOOL InsertLast(struct node** first ,int value)
{
	struct node* newnode=NULL;
	newnode=(struct node *)malloc(sizeof(struct node));
	//initialising  member of structure
	newnode->prev=NULL;
	newnode->data=value;
	newnode->next=NULL;
	if(*first==NULL)//if the node is empty
	{
		*first=newnode;
	}
	else
	{
		struct node* temp =(*first);
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}
	return TRUE;
}