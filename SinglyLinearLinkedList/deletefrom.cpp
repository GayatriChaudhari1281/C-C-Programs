#include"prototype.h"
#include"structure.h"

void Deletefrom(struct node** first,int pos)
{
	if(pos<=0||pos>Count(*first)||*first==NULL)
	{
		return;
	}
	struct node* temp1=*first;
	struct node* temp2=*first;
	while(pos-1>1)
	{
		temp1=temp1->next;
		pos--;
	}
	if(pos==1)
	{
		temp1=NULL;
		*first=NULL;
	}
	else
	{
		temp2=temp1->next;
		temp1->next=NULL;
	}
	while(temp2!=NULL)
	{
		temp1=temp2->next;
		free(temp2);
		temp2=temp1;
	}
	
}