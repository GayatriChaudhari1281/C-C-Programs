#include"prototype.h"
#include"structure.h"

void DisplayBackward(struct node* first)
{
	while(first->next!=NULL)
	{
		first=first->next;
	}
	while(first!=NULL)
	{
		printf("%d\n",first->data);
		first=first->prev;
	}
}