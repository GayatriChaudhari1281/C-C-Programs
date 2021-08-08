#include"prototype.h"
#include"structure.h"

BOOL LoopCheck(struct node *first)
{
	struct node *temp1,*temp2;
	temp1=temp2=first;
	if(first==NULL)
	{
		return FALSE;
	}
	while(temp1!=NULL&&temp2!=NULL)
	{
		temp1=temp1->next;
		if(temp1==temp2)
		{
			return TRUE;
		}
		if(temp1==NULL)
		{
			return FALSE;
		}
		temp1=temp1->next;
		if(temp1==temp2)
		{
			return TRUE;
		}
		temp2=temp2->next;
	}
	return FALSE;

}