#include"prototype.h"
#include"structure.h"

int Count(struct node* first,struct node* last)
{
	int icnt=0;
	if(first!=NULL&&last!=NULL)//if LL is empty null->data is segmentation fault
	{
		do
		{
			first=first->next;
			icnt++;
		}while(last->next!=first);
	}
	else
	{
		printf("LL is empty node not available");
	}
	return icnt;
}