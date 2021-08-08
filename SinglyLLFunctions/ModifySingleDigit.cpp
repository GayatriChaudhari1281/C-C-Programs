#include"prototype.h"
#include"structure.h"

void ModifySingleDigit(struct node** first)
{
	struct node* newnode=NULL,*temp=(*first);
	while(temp!=NULL)
	{
		if(temp->data>9)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			newnode->data=temp->data%10;
			newnode->next=temp->next;
			temp->data=temp->data/10;
			temp->next=newnode;
			continue;
		}
		temp=temp->next;
	}
}