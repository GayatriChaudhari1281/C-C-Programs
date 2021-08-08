/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int  BOOL;
#define TRUE 1
#define FALSE 0

struct node
{
	int eid;
	char ename[30];
	long int salary;
	struct node* next;
};

BOOL IsStackEmpty(struct node* first)
{
	if(first==NULL)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void push(struct node** first, int id, char* name ,long int amt)
{
	struct node *newnode=NULL;
	newnode= (struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory Not Available");
	}
	newnode->eid=id;
	strcpy(newnode->ename,name);
	newnode->next=NULL;
	newnode->salary=amt;
	if(*first==NULL)
	{
		*first=newnode;
	}
	else
	{
		struct node* temp=*first;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void pop(struct node** first)
{
	if(IsStackEmpty(*first))
	{
		printf("Nodes are not available\n");
		return;
	}
	else if((*first)->next==NULL)
	{
		printf("%d\t%d\t%s\n",(*first)->eid,(*first)->salary,(*first)->ename);
		free( *first);
		*first=NULL;
	}
	else
	{
		struct node* temp=*first;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		printf("%d\t%d\t%s\n",(temp->next)->eid,(temp->next)->salary,(temp->next)->ename);
		free(temp->next);
		temp->next=NULL;
	}
}
int main()
{
	struct node *head=NULL;
	printf("%d\n",sizeof(struct node));
	push(&head,11,"gayatri",35000);
	push(&head,23,"Dhiraj",56000);
	push(&head,22,"Suresh",74000);
	pop(&head);
	pop(&head);
	pop(&head);
	return 0;
}*/