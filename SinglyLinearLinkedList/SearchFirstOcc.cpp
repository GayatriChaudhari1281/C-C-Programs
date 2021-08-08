#include"prototype.h"
#include"structure.h"

int SearchFirstOcc(struct node* first,int value)
{
	int icnt=0;
	while(first!=NULL)
	{
		icnt++;
		if(first->data==value)
		{
			return icnt;
		}
		first=first->next;
	}
	return 0;
}