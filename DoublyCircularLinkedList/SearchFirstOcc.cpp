#include"prototype.h"
#include"structure.h"

int SearchFirstOcc(struct node* first,struct node* last,int value)
{
	int icnt=0;
	if(first!=NULL&&last!=NULL)//if LL is empty null->data is segmentation fault
	{
		do
		{
			icnt++;
			if(first->data==value)
			{
				return icnt;
			}
			first=first->next;
		}while(last->next!=first);
	}
	else
	{
		printf("LL is empty node not available");
	}
	return 0;
}