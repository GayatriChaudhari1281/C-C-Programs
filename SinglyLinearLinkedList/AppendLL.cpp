#include"prototype.h"
#include"structure.h"

void AppendLL(struct node** first)
{
	struct node* temp1=(*first);
	struct node* temp2=(*first);
	if(*first==NULL||(*first)->next==NULL||(*first)->next->next==NULL ||(*first)->next->next->next==NULL)
	{
		return ;
	}
	*first=(*first)->next->next->next;//400
	temp1->next->next->next=NULL;
	temp2=(*first);//400
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
	}
	temp2->next=temp1;
}