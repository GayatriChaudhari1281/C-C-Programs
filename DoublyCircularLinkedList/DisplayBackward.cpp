#include"prototype.h"
#include"structure.h"

void DisplayBackward(struct node* first,struct node* last)
{
	if((first!=NULL)&&(last!=NULL))//if LL is empty null->data is segmentation fault
	{
		do
		{
			printf("%d\n",last->data);
			last=last->prev;
		}while(last!=first->prev);
	}
	else
	{
		printf("LL is empty node not available\n");
	}
}