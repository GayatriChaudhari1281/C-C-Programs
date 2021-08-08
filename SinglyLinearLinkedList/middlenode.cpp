#include"prototype.h"
#include"structure.h"

int middlenode(struct node* first)
{
	if(first==NULL)
	{
		return -1;
	}
	struct node* temp=first;
	while(temp!=NULL&&temp->next!=NULL)
	{
		temp=temp->next->next;
		first=first->next;
	}
	return first->data;
}