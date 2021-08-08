#include"prototype.h"
#include"structure.h"

void DisplayForward(struct node* first,struct node* last)
{
	if((first!=NULL)&&(last!=NULL))//if LL is empty null->data is segmentation fault
	{
		do
		{
			printf("%d\n",first->data);
			first=(first)->next;
		}while(last->next!=first);
	}
	else
	{
		printf("LL is empty node not available\n");
	}
}