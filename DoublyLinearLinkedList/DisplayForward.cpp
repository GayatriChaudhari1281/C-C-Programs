#include"prototype.h"
#include"structure.h"

void DisplayForward(struct node* first)
{
	while(first!=NULL)
	{
		printf("%d\n",first->data);
		first=first->next;
	}

}