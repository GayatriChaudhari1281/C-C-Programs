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
		(*last)=(*last)->prev;
		free((*last)->next);
		(*last)->next=(*first);
		(*first)->prev=(*last);
	}
	return TRUE;
}