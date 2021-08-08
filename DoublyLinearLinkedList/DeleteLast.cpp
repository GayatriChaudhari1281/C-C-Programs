#include"prototype.h"
#include"structure.h"

BOOL DeleteLast(struct node** first)
{
	struct node* temp = *first;
	if(*first==NULL)
	{
		return FALSE;
	}
	else if((*first)->next==NULL)
	{
		free(*first);
		*first=NULL;
	}
	else
	{
		struct node* temp=(*first);
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
	return TRUE;
}
