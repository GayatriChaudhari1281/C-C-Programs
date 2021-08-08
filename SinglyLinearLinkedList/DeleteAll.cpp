#include"prototype.h"
#include"structure.h"

void DeleteAll(struct node** first)
{
	if(*first==NULL)
	{
		return;
	}
	struct node* temp1=*first;
	struct node* temp2=*first;
	*first=NULL;
	while(temp2!=NULL)
	{
		temp1=temp2->next;
		free(temp2);
		temp2=temp1;
	}
}