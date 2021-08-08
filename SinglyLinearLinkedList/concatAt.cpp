#include"prototype.h"
#include"structure.h"

void concatAt(struct node** first1, struct node** first2,int pos)
{
	if(*first1==NULL||*first2==NULL)
	{
		return;
	}
	else if(pos<=0||pos>Count(*first1)+1)
	{
		return;
	}
	struct node* temp1=*first1;
	struct node* temp2=NULL;
	while(pos-1>1)
	{
		temp1=(temp1)->next;
		pos--;
	}
	temp2=(*first2);
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
	}
	temp2=temp1->next;
	temp1->next=(*first2);
}