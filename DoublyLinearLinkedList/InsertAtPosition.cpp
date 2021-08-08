#include"prototype.h"
#include"structure.h"

BOOL InsertAtPosition(struct node** first,int value,int pos)
{
	if(pos<=0)
	{
		return FALSE;
	}
	else if(pos>Count(*first)+1)
	{
		return FALSE;
	}
	else if(pos==1)
	{
		InsertFirst(first,value);
	}
	else if(pos==Count(*first)+1)
	{
		InsertLast(first,value);
	}
	else
	{
		struct node *newnode=NULL;
		struct node *temp=*first;
		newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("Memory Not available\n");
		}
		newnode->data=value;
		newnode->next=NULL;
		newnode->prev=NULL;
		while(pos-1>1)
		{
			temp=temp->next;
			pos--;
		}
		newnode->next=temp->next;                                                                                                      
		temp->next->prev=newnode;   
		newnode->prev=temp;                              
		temp->next=newnode;
	}
	return TRUE;
}