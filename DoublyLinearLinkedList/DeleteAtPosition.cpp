#include"prototype.h"
#include"structure.h"

BOOL DeleteAtPosition(struct node** first,int pos)
{
	if(pos<=0)
	{
		return FALSE;
	}
	else if(pos>Count(*first))
	{
		return FALSE;
	}
	else if(pos==1)
	{
		DeleteFirst(first);
	}
	else if(pos==Count(*first))
	{
		DeleteLast(first);
	}
	else
	{
		struct node *temp=(*first);
		while(pos-1>1)
		{
			temp=temp->next;
			pos--;
		}
		temp->next=temp->next->next;
		free(temp->next->prev);
		temp->next->prev=temp;

	}
	return TRUE;

}