#include"prototype.h"
#include"structure.h"

void Displaylast3(struct node* first)
{
	if(first==NULL||first->next==NULL||first->next->next==NULL)
	{
		return;
	}
	while(first->next->next->next!=NULL)
	{
		first=first->next;
	}
	printf("%d\t%d\t%d\n",first->data,first->next->data,first->next->next->data);
}