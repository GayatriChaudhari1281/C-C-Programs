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
		struct node *temp1=*first;//traverse
		struct node *temp2=NULL;//store address of deleting node
		while(pos-1>1)
		{
			temp1=temp1->next;
			pos--;
		}
		temp2=temp1->next;
		temp1->next=temp1->next->next;
		//temp1->next=temp2->next;
		free(temp2);
	}
	return TRUE;

}