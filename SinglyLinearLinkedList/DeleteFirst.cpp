#include"prototype.h"
#include"structure.h"

BOOL DeleteFirst(struct node **first)
{
	if(*first==NULL)
	{
		return FALSE;
	}
	else
	{
		struct node* temp =(*first);
		*first=((*first)->next);
		free(temp);
	}

	return TRUE;
}