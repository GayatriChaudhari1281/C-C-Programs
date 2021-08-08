#include"prototype.h"
#include"structure.h"

BOOL campare(struct node* first,struct node* second)
{
	while(first!=NULL&&second!=NULL)
	{
		if(first->data!=second->data)
		{
			return FALSE;
		}
	}
	if(first==NULL&&second==NULL)
		return TRUE;
	else
		return FALSE;

}