#include"prototype.h"
#include"structure.h"

void DisplayN(struct node* first,int n)
{
	while(n!=0&&first!=NULL)
	{
		printf("%d\n",first->data);
		first=first->next;
		n--;
	}
}