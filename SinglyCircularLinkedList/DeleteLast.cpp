#include"prototype.h"
#include"structure.h"

BOOL DeleteLast(struct node** first,struct node** last)
{
	if((*first==NULL) && (*last==NULL))//if LLis empty
	{
		return FALSE;
	}
	else if((*first)==(*last))//if LLis contains only one node
	{
		free(*first);
		*first=(*last)=NULL;
	}
	else
	{
		struct node *temp=*first;
		while(temp->next!=(*last))
		{
			temp=temp->next;
		}
		free(*last);
		*last=temp;
		(*last)->next=(*first);
	}
	return TRUE;
}