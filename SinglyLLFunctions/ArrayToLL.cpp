#include"prototype.h"
#include"structure.h"

void ArrayToLL(int brr[],int size ,struct node** first)
{
	int i=0;
	struct node* newnode=NULL,(*temp)=(*first);
	for(i=size-1;i>=0;i--)
	{
		newnode =(struct node*)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			return;
		}
		newnode->data=brr[i];
		newnode->next=NULL;
		if(*first!=NULL)
		{
			newnode->next=(*first);
		}
		*first=newnode;
	}
}