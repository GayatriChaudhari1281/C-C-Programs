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
	printf("Nodes displayed in forward direction\n");
	DisplayForward(head,tail);
	printf("Nodes displayed in backward direction\n");
	DisplayBackward(head,tail);
	
	InsertLast(&head,&tail,101);
	printf("last node inserted succesfully\n");
	DisplayForward(head,tail);
	
	DeleteFirst(&head,&tail);
	printf("first node deleted succesfully\n");
	DisplayForward(head,tail);

	DeleteLast(&head,&tail);
	printf("last node deleted succesfully\n");
	DisplayForward(head,tail);

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

	InsertAtPosition(&head , &tail , 43 , 4);
	printf("value inserted at given position succesfully\n");
	DisplayForward(head,tail);

	DeleteAtPosition(&head,&tail,3);
	printf("node deleted at given position\n");
	DisplayForward(head,tail);

	return 0;
}