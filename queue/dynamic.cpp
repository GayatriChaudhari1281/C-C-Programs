/*#include<stdio.h>
#include<stdlib.h>

typedef int  BOOL;
#define TRUE 1
#define FALSE 0

struct node 
{
	int data;
	struct node* next;
};
void Enqueue(struct node** front,struct node** rare ,int value)
{
	struct node* newnode=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memory not available");
		return;
	}
	newnode->data=value;
	newnode->next=NULL;
	if((*front==NULL)&&(*rare==NULL))
	{
		*front=*rare=newnode;
	}
	else
	{
		(*rare)->next=newnode;
		(*rare)=(*rare)->next;
	}
}

int Dequeue(struct node** front,struct node** rare)
{
	int ret=0;
	if(((*front) == NULL) && ((*rare) == NULL))//if queue is empty
	{
		return -1;
	}
	else if((*front)==(*rare))//only one node
	{
		ret=(*front)->data;
		free(*front);
		*front=*rare=NULL;
	}
	else //more than one node
	{
		struct node*temp =*front;
		ret=(*front)->data;
		*front=(*front)->next;
		free(temp);
	}
	return ret;
}
void Traverse(struct node* front)
{
	while(front!=NULL)
	{
		printf("%d\n",front->data);
		front=front->next;
	}
}
int main()
{
	struct node *head=NULL,*tail=NULL;
	Enqueue(&head,&tail,11);
    Enqueue(&head,&tail,21);
	Enqueue(&head,&tail,31);
	Enqueue(&head,&tail,41);
	Enqueue(&head,&tail,51);
	Enqueue(&head,&tail,61);

	Traverse(head);

	printf("deleted nodes are\n");
	printf("%d\n",Dequeue(&head,&tail));
	printf("%d\n",Dequeue(&head,&tail));
	printf("%d\n",Dequeue(&head,&tail));
	printf("%d\n",Dequeue(&head,&tail));
	printf("remaining nodes are:\n");
	Traverse(head);

	return 0;
}*/