#include"prototype.h"
#include"structure.h"

void DisplayOddNode(struct node* first)
{
	while(first!=NULL)
	{
			printf("%d\n",first->data);
			if(first->next==NULL)//segmentation fault 
			{
				return;//break;
			}
			first=first->next->next;
	}
}

/*void dispaly(struct node *first)
{
printf("%d",first->data);
If(first->next!=null)
{
	break;
}
Display(first->next->next);
}
}*/