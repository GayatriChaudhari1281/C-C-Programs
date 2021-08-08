#include"prototype.h"
#include"structure.h"

int Count(struct node* first)
{
	int icnt=0;
	while(first!=NULL)
	{
		icnt++;
		first=first->next;
	}
	return icnt;
}