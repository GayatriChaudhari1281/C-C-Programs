#include"prototype.h"
#include"structure.h"

void Display(struct node* first)
{
	while(first!=NULL)
	{
		printf("%d\n",first->data);
		first=first->next;
	}
}