#include"prototype.h"
#include"structure.h"

BOOL DeleteAtPosition(struct node** first,struct node** last,int pos)
{
	if(pos<=0)
	{
		return FALSE;
	}
	else if(pos>Count(*first,*last))
	{
		return FALSE;
	}
	else if(pos==1)
	{
		DeleteFirst(first,last);
	}
	else if(pos==Count(*first,*last))
	{
		DeleteLast(first,last);
	}
	else
	{
		struct node *temp1=(*first);
		struct node *temp2=NULL;
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