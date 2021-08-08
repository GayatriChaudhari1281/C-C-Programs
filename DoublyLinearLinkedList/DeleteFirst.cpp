#include"prototype.h"
#include"structure.h"

BOOL DeleteFirst(struct node **first)
{
	if(*first==NULL)//if LL is empty
	{
		return FALSE;
	}
	else if((*first)->next==NULL)
	{
		free(*first);
		*first=NULL;//avoid dangling ptr
	}
	else
	{
		*first=(*first)->next;
		free((*first)->prev);
		(*first)->prev=NULL;
	}

	return TRUE;
}