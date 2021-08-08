#include"prototype.h"
#include"structure.h"
int main()
{
	struct node* head = NULL;
	struct node* tail = NULL;
	
	InsertFirst(&head,&tail,11);
	InsertFirst(&head,&tail,21);
	InsertFirst(&head,&tail,31);
	InsertFirst(&head,&tail,41);
	printf("first node inserted succesfully\n");
	Display(head,tail);
	
	InsertLast(&head,&tail,101);
	printf("last node inserted succesfully\n");
	Display(head,tail);
	
	DeleteFirst(&head,&tail);
	printf("first node deleted succesfully\n");
	Display(head,tail);

	DeleteLast(&head,&tail);
	printf("last node deleted succesfully\n");
	Display(head,tail);

	int ret=Count(head,tail);
	printf("number of nodes in LL is : %d\n",ret);

	int i=SearchFirstOcc(head,tail,21);
	if(i==0)
	{
		printf("node not found\n");
	}
	else
	{
		printf("node found at position:%d\n",i);
	}

	InsertAtPosition(&head , &tail , 43 , 5);
	printf("value inserted at given position succesfully\n");
	Display(head,tail);

	DeleteAtPosition(&head,&tail,3);
	printf("node deleted at given position\n");
	Display(head,tail);

	return 0;
}