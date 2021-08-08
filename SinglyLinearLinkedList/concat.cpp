#include"prototype.h"
#include"structure.h"

void concat(struct node** first1,struct node** first2)
{
	if(*first1==NULL)
	{
		*first1=*first2;
		return;
	}
	else if(*first2==NULL)
	{
		return;
	}
	struct node* temp=*first1;
	while(temp->next!=NULL)
	{
		temp=(temp)->next;
	}
	temp->next=*first2;
}