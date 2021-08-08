#include"prototype.h"
#include"structure.h"

BOOL DeleteFirst(struct node** first,struct node** last)
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
		*first=(*first)->next;
		free((*last)->next);
		(*last)->next=(*first);
	}
	return TRUE;
}
