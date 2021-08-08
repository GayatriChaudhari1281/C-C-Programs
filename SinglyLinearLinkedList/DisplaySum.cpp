#include"prototype.h"
#include"structure.h"
//ip  7 3 5 8 13  27 4 31 6
//op 3 5 8 13 
void DisplaySum(struct node* first)
{
	while(first!=NULL&&first->next!=NULL&&first->next->next!=NULL)
	{
		if(first->data+first->next->data==first->next->next->data)
		{
			printf("%d\t%d\t%d\n",first->data,first->next->data,first->next->next->data);
		}
		first=first->next;
	}
}